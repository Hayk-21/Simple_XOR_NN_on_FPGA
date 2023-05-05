`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:01:02 04/17/2023 
// Design Name: 
// Module Name:    Floating_Point_Exponent 
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
module Floating_Point_Exponent(res, x);
input [31:0] x;
output [31:0] res;
reg [31:0] sum = 32'b00000000000000000000000000000000;
reg [31:0] temp_a [0:1];
reg [31:0] temp_m [0:1];
reg [31:0] temp_p1, temp_p2, temp_p3, temp_p4;


wire [31:0] res_a, res_m, res_p1, res_p2, res_p3, res_p4;
reg [31:0] temp_sum [0:1];

Floating_Point_Multiplier mul(.a(temp_m[0]), .b(temp_m[1]), .res(res_m));
Floating_Point_Adder add(.a(temp_a[0]), .b(temp_a[1]), .res(res_a));
Floating_Point_Power #(2) pow(.x(temp_p1), .res(res_p1));
Floating_Point_Power #(3) pow2(.x(temp_p2), .res(res_p2));
Floating_Point_Power #(4) pow3(.x(temp_p3), .res(res_p3));
Floating_Point_Power #(5) pow4(.x(temp_p4), .res(res_p4));

always @(x) begin
	temp_sum[0] = 32'b00111111100000000000000000000000;
	temp_a[0] = temp_sum[0];
	temp_a[1] = x;
	#1
	temp_sum[0] = res_a; // 1 + x
	temp_p1 = x;
	#2
	temp_m[0] = res_p1; // (x^2)/2
	temp_m[1] = 32'b00111111000000000000000000000000; // 1/2
	#1
	temp_sum[1] = res_m; // (x^2)/2
	temp_a[0] = temp_sum[0];
	temp_a[1] = temp_sum[1]; // 1 + x + (x^2)/2
	#1
	temp_sum[0] = res_a;
	temp_p2 = x;
	#3
	temp_m[0] = res_p2; // (x^3)/6
	temp_m[1] = 32'b00111110001010101010101010101011; // 1/6
	#1
	temp_sum[1] = res_m; // (x^3)/6
	temp_a[0] = temp_sum[0];
	temp_a[1] = temp_sum[1];
	#1
	temp_sum[0] = res_a; // 1 + x + (x^2)/2 + (x^3)/6
	temp_p3 = x;
	#4
	temp_m[0] = res_p3; // (x^4)/24
	temp_m[1] = 32'b00111101001010101010101010101011; // 1/24
	#1
	temp_sum[1] = res_m; // (x^4)/24
	temp_a[0] = temp_sum[0];
	temp_a[1] = temp_sum[1];
	#1
	temp_sum[0] = res_a; // 1 + x + (x^2)/2 + (x^3)/6 + (x^4)/24
	temp_p4 = x;
	#5
	temp_m[0] = res_p4; // (x^5)/120
	temp_m[1] = 32'b00111100000010001000100010001001; // 1/120
	#1
	temp_sum[1] = res_m; // (x^5)/120
	temp_a[0] = temp_sum[0];
	temp_a[1] = temp_sum[1];
end
assign res = res_a;
endmodule
