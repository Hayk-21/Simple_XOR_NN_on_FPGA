`timescale 1ns / 1ps

module tb_Floating_Point_Adder;
	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	
	// Outputs
	wire [31:0] res;

	// Instantiate the Floating_Point_Adder module
	Floating_Point_Adder dut (
		.res(res),
		.a(a),
		.b(b)
	);

	// Initialize inputs
	initial begin
		// Test case 1
		a = 32'b01000000101100100000010000011001;
		b = 32'b11000000101101000000010000011010;
		#10; // Wait for 10 time units
		$display("a = %b, b = %b, res = %b", a, b, res);

		// Test case 2
		a = 32'b00111111011101010010100001011011;
		b = 32'b10111111011101010101010000101101;
		#10; // Wait for 10 time units
		$display("a = %b, b = %b, res = %b", a, b, res);
		
		// Test case 3
		a = 32'b00000000000000000000000000000000;
		b = 32'b11111111111111111111111111111111;
		#10; // Wait for 10 time units
		$display("a = %b, b = %b, res = %b", a, b, res);
		
		// Add more test cases here as needed
		
		$finish; // Finish simulation
	end
endmodule
