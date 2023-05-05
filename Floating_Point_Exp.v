`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:39 04/11/2023 
// Design Name: 
// Module Name:    Floating_Point_Exp 
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
module Floating_Point_Exp(
    input pin,
	 output led
	 // input [31:0] x,
    //output [31:0] res
);
/*
reg [31:0] one = 32'b00111111100000000000000000000000;
reg [31:0] exp;
wire [31:0] temp1, temp2;
Floating_Point_Adder add1 (
    .res(temp1),
    .a(one),
    .b(x)
);

Floating_Point_Adder add2 (
    .res(temp2),
    .a(one),
    .b(temp1)
);

always @(*) begin
    exp = temp2;
end

assign res = exp;
*/
assign led = pin;
endmodule
