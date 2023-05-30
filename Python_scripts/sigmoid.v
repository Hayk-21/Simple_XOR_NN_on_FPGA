module sigmoid(x,out);

    input signed [7:0] x;
    output reg signed [15:0] out;
      
    
   reg signed [7:0] y,z,sum;
   reg signed [15:0] sq,sh;
    
   always@(*)
   begin
   if(x[7]==1'b1)
       y=-x;
   else
       y=x; //24
    z=y>>>2; //6
   sum= z+8'b1111_0000; //6 + 240=246

   sq=sum*sum; //100
    $display("z=%b, y=%b, sum=%b, sq=%b", z, y, sum, sq);

   sh=sq>>>1;

   if(x[7]==1'b1)
       out=sh;
   else
       out=16'b00000001_00000000-sh;
   $display("out=%b", out);

   end
endmodule
