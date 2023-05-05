`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:57:24 04/17/2023 
// Design Name: 
// Module Name:    Floating_Point_Sigmoid 
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
module Floating_Point_Sigmoid(res, x);
input [31:0] x;
output [31:0] res;
reg [31:0] temp_e;
reg [31:0] temp_a [0:1];
reg [31:0] temp_m [0:1];
reg [31:0] temp_d [0:1];
wire [31:0] res_a, res_m, res_e, res_d;

Floating_Point_Exponent exp(.res(res_e), .x(temp_e));
Floating_Point_Div div(.Out(res_d), .InA(temp_d[0]), .InB(temp_d[1]));
Floating_Point_Adder add(.a(temp_a[0]), .b(temp_a[1]), .res(res_a));
Floating_Point_Multiplier mul(.a(temp_m[0]), .b(temp_m[1]), .res(res_m));

always@(x) begin
	temp_m[0] = 32'b10111111100000000000000000000000; // -1
	temp_m[1] = x;
	#1
	temp_e = res_m;
	#23
	temp_a[0] = 32'b00111111100000000000000000000000; // 1
	temp_a[1] = res_e; // 1 + exp(-x)
	#1
	temp_d[0] = 32'b00111111100000000000000000000000; // 1
	temp_d[1] = res_a; // 1 / (1 + exp(-x))
end
assign res = res_d;
endmodule
