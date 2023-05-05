`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:01:26 04/23/2023 
// Design Name: 
// Module Name:    forward 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Forward(
   input p_1, p_2,
	output [31:0] out
    );

reg [31:0] weights_ih [1:0][3:0]; // Declare 2D array with size (2, 4)
reg [31:0] weights_ho [3:0][0:0]; // Declare 2D array with size (4, 1)
reg [31:0] bias_h [0:3]; // Declare 1D array with size (4)
reg [31:0] bias_o [0:0]; // Declare 1D array with size (1)
reg [31:0] hidden [0:3];
reg [31:0] x [0:1];

initial begin
  	// weights_ih
	weights_ih[0][0] = 32'b00111110111101011001110000110001;
	weights_ih[0][1] = 32'b10111110100110011110101000100001;
	weights_ih[0][2] = 32'b10111110111100110110111000110001;
	weights_ih[0][3] = 32'b00111111110100010000100110100101;
	weights_ih[1][0] = 32'b10111101101001101011101111011011;
	weights_ih[1][1] = 32'b00111110111000101001101010101100;
	weights_ih[1][2] = 32'b00111111001100001110111001110101;
	weights_ih[1][3] = 32'b00111111101100100101000000111000;

	// weights_ho
	weights_ho[0][0] = 32'b10111111000111001111011011010111;
	weights_ho[1][0] = 32'b00111101100000111001110110011110;
	weights_ho[2][0] = 32'b10111110110000101100001001001100;
	weights_ho[3][0] = 32'b00111110110011001011001011011101;

	// bias_h
	bias_h[0] = 32'b00111110111011111101100001111101;
	bias_h[1] = 32'b00111111011010100110101111001001;
	bias_h[2] = 32'b00111111010110100000101010011011;
	bias_h[3] = 32'b00111110110100111100001010000111;

	// bias_o
	bias_o[0] = 32'b00111110101000110110000110111011;
 
	 hidden[0] = 32'b00000000000000000000000000000000;
    hidden[1] = 32'b00000000000000000000000000000000;
    hidden[2] = 32'b00000000000000000000000000000000;
    hidden[3] = 32'b00000000000000000000000000000000;
end


always @(*) begin
case({p_1, p_2})
	2'b00: begin
		x[0] <= 32'b00000000000000000000000000000000;
		x[1] <= 32'b00000000000000000000000000000000;
	end
	2'b01: begin
		x[0] <= 32'b00000000000000000000000000000000;
		x[1] <= 32'b00111111100000000000000000000000;
	end
	2'b10: begin
		x[0] <= 32'b00111111100000000000000000000000;
		x[1] <= 32'b00000000000000000000000000000000;
	end
	2'b11: begin
		x[0] <= 32'b00111111100000000000000000000000;
		x[1] <= 32'b00111111100000000000000000000000;
	end
endcase
end

reg [31:0] temp_a [0:1];
reg [31:0] temp_m [0:1];
reg [31:0] temp_s;
wire [31:0] res_a, res_m, res_s;

Floating_Point_Adder add(.a(temp_a[0]), .b(temp_a[1]), .res(res_a));
Floating_Point_Multiplier mul(.a(temp_m[0]), .b(temp_m[1]), .res(res_m));
Floating_Point_Sigmoid sig(.x(temp_s), .res(res_s));

reg [31:0] hidden_sum = 32'b00000000000000000000000000000000;
reg [31:0] out_sum;

integer i, j;
always@(x[0] or x[1]) begin
	for (i = 0; i < 4; i = i + 1) begin
		hidden_sum = 32'b00000000000000000000000000000000;
		for (j = 0; j < 2; j = j + 1) begin
			temp_m[0] = x[j];
			temp_m[1] = weights_ih[j][i];
			#1
			temp_a[0] = hidden_sum;
			temp_a[1] = res_m;
			#1
			hidden_sum = res_a;
		end
		#1
		temp_a[0] = hidden_sum;
		temp_a[1] = bias_h[i];
		#1
		hidden_sum = res_a;
		#1
		temp_s = hidden_sum;
		#30
		hidden[i] = res_s; // hidden[i] = sigmoid(hidden_sum);
	end
	#5
	out_sum = 32'b00000000000000000000000000000000;
	#1
	for (j = 0; j < 4; j = j + 1) begin
		temp_m[0] = hidden[j];
		temp_m[1] = weights_ho[j][0];
		#1
		temp_a[0] = out_sum;
		temp_a[1] = res_m;
		#1
		out_sum = res_a;
	end
	#1
	temp_a[0] = out_sum;
	temp_a[1] = bias_o[0];
	#1
	out_sum = res_a;
	#1
	temp_s = out_sum;
end
assign out = res_s; // out = sigmoid(out_sum);
endmodule
