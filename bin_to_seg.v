`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:47:49 04/23/2023 
// Design Name: 
// Module Name:    bin_to_seg 
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
module bin_to_seg(
	input data,
	output reg [6:0] segment
);

always @(*) begin
	case (data)
		1'b0: segment = 7'b1111110;
		1'b1: segment = 7'b0110000;
	endcase
end

endmodule
