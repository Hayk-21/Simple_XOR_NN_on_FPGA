module my_xor_tb;

  reg signed [31:0] x;
  wire signed [31:0] pred;

  // Instantiate the DUT
  my_xor dut(.x(x), .pred(pred));

  initial begin
    // Test case 1: x = 0
    x = 0;
    #1;
    $display("Test case 1: x = %d, pred = %d", x, pred);
    
    // Test case 2: x = 1
    x = 1;
    #1;
    $display("Test case 2: x = %d, pred = %d", x, pred);
    
    // Test case 3: x = -1
    x = -1;
    #1;
    $display("Test case 3: x = %d, pred = %d", x, pred);

    // Test case 4: x = 123456789
    x = 123456789;
    #1;
    $display("Test case 4: x = %d, pred = %d", x, pred);
    
    // Test case 5: x = -123456789
    x = -123456789;
    #1;
    $display("Test case 5: x = %d, pred = %d", x, pred);
    
    // Stop simulation
    #1;
    $finish;
  end

endmodule
