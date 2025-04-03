module arithmatic(input [2:0] RegA , [2:0] RegB , clk , [2:0] instruction , output reg [2:0] out);
    always @(posedge clk) begin
        casez (instruction)
            3'b000 : out = 0 ;
            3'b001 : out = RegA;
            3'b010 : out = RegB;
            3'b011 : out = RegA & RegB;
            3'b100 : out = RegA | RegB;
            3'b101 : out = RegA ^ RegB;
            3'b110 : out = ~RegA;
            3'b111 : out = ~RegB;
        endcase
    end       
endmodule