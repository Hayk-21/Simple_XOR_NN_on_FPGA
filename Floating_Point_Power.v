`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:44:56 04/18/2023 
// Design Name: 
// Module Name:    Floating_Point_Power 
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
module Floating_Point_Power#(parameter POWER = 2)(
	input [31:0] x, 
	output [31:0] res
    );
reg [31:0] mul_res;
reg [31:0] temp_m [0:1];
wire [31:0] res_m;

Floating_Point_Multiplier mul(.a(temp_m[0]), .b(temp_m[1]), .res(res_m));

integer i;
always @(x) begin
	mul_res = x;
	for (i = 0; i < (POWER-1); i = i + 1) begin
		temp_m[0] = mul_res;
		temp_m[1] = x;
		#1
		mul_res = res_m;
	end
end
assign res = mul_res;
endmodule
