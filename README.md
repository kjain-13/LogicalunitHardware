this repository aims to build a logical unit featuring 3 bit operation of two reg A and B.

The logical unit performs the following operations based on the 3-bit Opcode:
000: CLEAR
001: MOV out, A
002: MOV out, B
011: AND out, A, B
100: OR out, A, B
101: XOR out, A, B
110: NOT out, 
111: NOT out, B

and finally hardcoding the output using a mux without any use of microprogrammed circuitary additionally devloping a pipeline and scan chains for testing of final circuitary.
