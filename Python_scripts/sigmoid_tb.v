`timescale 1ns / 1ps


module sigmoid_tb();

    reg signed [7:0] x;
    wire [15:0] out;
     
    sigmoid s0(x,out);
   
    initial
    begin
   
    x=8'b0001_1000;   
    #10 x=8'b0000_0001;   
    #10 x=8'b0000_0100;   
    end

endmodule
