module exp(input [7:0] x, output reg [7:0] result);

reg [7:0] temp;
reg [3:0] i;

always @(*) begin
    result = 1;
    temp = 1;
    for (i = 0; i < x; i = i + 1) begin
        temp = temp * 2;
        result = result * temp;
    end
end

endmodule
