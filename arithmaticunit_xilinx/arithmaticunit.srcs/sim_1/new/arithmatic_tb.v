module arithmatic_tb();
    reg [2:0] RegA , RegB;
    reg [2:0] instruction;
    reg clk = 0 ;
    wire [2:0] out;
    
    arithmatic inst1 (.RegA(RegA) , .RegB(RegB) , .clk(clk) , .instruction(instruction) , .out(out));
    
    always begin
        #5 clk = ~clk;
    end
    
    initial begin
        $monitor("Time = %b , RegA = %b , RegB = %b , Instruction = %b , output = %b" , $time , RegA , RegB , instruction , out);
        RegA = 2 ; RegB = 5;
        #10 instruction = 0;
        #10 instruction = 1;
        #10 instruction = 2;
        #10 instruction = 3;
        #10 instruction = 4;
        #10 instruction = 5;
        #10 instruction = 6;
        #10 instruction = 7;
        #10 $finish();
    end
endmodule