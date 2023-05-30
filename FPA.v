`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:38:38 04/11/2023 
// Design Name: 
// Module Name:    FPA 
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
module FPA(
   input pin_1, pin_2,
   input clk,
	output reg [6:0] seg,
	output reg [3:0] an
);




wire [31:0] out;
reg f_p_1, f_p_2;
reg result;

parameter [31:0] binary_05 = 32'b00111111000000000000000000000000;
parameter [7:0] integer_05 = binary_05[30:23];
parameter [22:0] fractional_05 = binary_05[22:0];

Forward propogation(.p_1(f_p_1), .p_2(f_p_2), .out(out));

always @(posedge clk) begin
	f_p_1 <= pin_1;
	f_p_2 <= pin_2;
// compare integer part
	if (out[30:23] > integer_05) begin
		result <= 1'b1;
	end else if (out[30:23] < integer_05) begin
		result <= 1'b0;
	end else begin
    // compare fractional part
		if (out[22:0] > fractional_05) begin
			result <= 1'b1;
		end else if (out[22:0] < fractional_05) begin
			result <= 1'b0;
		end else begin
			result <= 1'b1;
		end
	end
end 

wire xor_output;
assign xor_output = pin_1 ^ pin_2;
always @(*) begin
	case (xor_output)
		1'b0: seg <= 7'b0000001; // Display '0'
		1'b1: seg <= 7'b1001111; // Display '1'
		default: seg <= 7'b1111111; // Display nothing (off)
	endcase
	an <= 4'b1110;
end
endmodule
