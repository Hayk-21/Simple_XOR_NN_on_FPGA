`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:12 04/23/2023 
// Design Name: 
// Module Name:    Display 
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
module Display (
    input wire clk,
    output reg [6:0] seg,
    output reg [3:0] an
);

always @(posedge clk) begin
    seg <= 7'b100_0000;
    an <= 4'b1110;
end

endmodule
