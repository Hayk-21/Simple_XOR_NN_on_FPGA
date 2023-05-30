module float_adder(
  input clk,             // Clock input
  input [31:0] a,        // 32-bit floating point number a (bit representation)
  input [31:0] b,        // 32-bit floating point number b (bit representation)
  output reg [31:0] sum  // 32-bit floating point sum (bit representation)
);

  reg [7:0] exp_a, exp_b, exp_sum; // Exponent
  reg [22:0] frac_a, frac_b, frac_sum; // Fraction (mantissa)
  reg sign_a, sign_b, sign_sum; // Sign

  always @(*) begin
    // Extract exponent, fraction, and sign from input a
    exp_a = a[30:23];
    frac_a = {1'b1, a[22:0]};
    sign_a = a[31];

    // Extract exponent, fraction, and sign from input b
    exp_b = b[30:23];
    frac_b = {1'b1, b[22:0]};
    sign_b = b[31];

    // Compute the sum of the exponents
    exp_sum = exp_a + exp_b;

    // Perform mantissa alignment (shift right or left) based on the difference in exponents
    if (exp_a > exp_b) begin
      frac_b = {frac_b, 9'b0};
      frac_a = frac_a >> (exp_a - exp_b);
    end else if (exp_a < exp_b) begin
      frac_a = {frac_a, 9'b0};
      frac_b = frac_b >> (exp_b - exp_a);
    end

    // Determine the sign of the sum
    if (sign_a == sign_b) begin
      sign_sum = sign_a;
    end else if (exp_a == exp_b && frac_a > frac_b) begin
      sign_sum = sign_a;
    end else begin
      sign_sum = sign_b;
    end

    // Perform the mantissa addition
    frac_sum = frac_a + frac_b;

    // Check for overflow in the mantissa
    if (frac_sum[23]) begin
      exp_sum = exp_sum + 1;
      frac_sum = frac_sum >> 1;
    end
  end

  always @(posedge clk) begin
    // Assign the output sum with the computed exponent, mantissa, and sign
    sum <= {sign_sum, exp_sum, frac_sum[21:0]};
  end
endmodule
