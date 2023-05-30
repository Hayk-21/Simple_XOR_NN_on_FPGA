module float_adder_tb;

  // Parameters
  parameter CLK_PERIOD = 10;  // Clock period in simulation time units

  // Inputs
  reg clk;                   // Clock
  reg [31:0] a, b;           // Input floating point numbers

  // Outputs
  wire [31:0] sum;          // Output floating point sum

  // Instantiate the float_adder module
  float_adder uut (
    .clk(clk),
    .a(a),
    .b(b),
    .sum(sum)
  );

  // Generate clock
  always #(CLK_PERIOD/2) clk = ~clk;

  // Convert binary to floating-point value
  function real bitstofloat(input logic [31:0] bits);
    real r;
    $bitstoreal(r, bits);
    return r;
  endfunction

  // Initialize inputs
  initial begin
    $dumpfile("sim.vcd");  // Dump waveform to VCD file
    $dumpvars(0, float_adder_tb);  // Dump all variables to VCD file
    clk = 0;
    a = 32'h3F99999A;  // Input a = 1.2 in single-precision IEEE 754 format
    b = 32'h3F8CCCCD;  // Input b = 1.1 in single-precision IEEE 754 format
  end

  // Monitor for displaying input and output values
  always @(posedge clk) begin
    $fwrite($fopen("output.txt", "a"), "a = %f, b = %f, sum = %f\n", bitstofloat(a), bitstofloat(b), bitstofloat(sum));
  end

endmodule
