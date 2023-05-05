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
//   output reg [6:0] seg,
//	output reg [3:0] an,
//	output reg result
	output [7:0] led
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

assign led = out[30:23];
/*always @(posedge clk) begin
	if (pin_1 & pin_2) begin
		result <= 1'b1;
	end
	else if (~pin_1 & pin_2) begin
		result <= 1'b0;
	end	
	else begin
		result <= 1'b0;
	end
end	
*/


/*	
	if (result) begin
		seg = 7'b1001111;
		an = 4'b1110;
	end else begin
		seg = 7'b0000001;
		an = 4'b1110;
	end
end
*/

//assign led_1 = pin_1;
//assign led_2 = pin_2;

endmodule
