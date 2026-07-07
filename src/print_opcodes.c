#include <stdio.h>

#define OPCODE(a, b, c, d) (((a) << 24) | ((b) << 16) | ((c) << 8) | (d)) 

int main(void) {
	int ADD = OPCODE(' ', 'A', 'D', 'D');
	int SUB = OPCODE(' ', 'S', 'U', 'B');
	int DIV = OPCODE(' ', 'D', 'I', 'V');
	int MUL = OPCODE(' ', 'M', 'U', 'L');
	int MOD = OPCODE(' ', 'M', 'O', 'D');

	int JMP = OPCODE(' ', 'J', 'M', 'P');
	int JNE = OPCODE(' ', 'J', 'N', 'E');
	int JGR = OPCODE(' ', 'J', 'G', 'R');
	int JEQ = OPCODE(' ', 'J', 'E', 'Q');
	int JLE = OPCODE(' ', 'J', 'L', 'E');
	int CMP = OPCODE(' ', 'C', 'M', 'P');
	int TST = OPCODE('T', 'E', 'S', 'T');
	int HLT = OPCODE('H', 'A', 'L', 'T');
	int NOP = OPCODE(' ', 'N', 'O', 'P');
	int CLL = OPCODE('C', 'A', 'L', 'L');
	int RET = OPCODE(' ', 'R', 'E', 'T');
	int TRP = OPCODE('T', 'R', 'A', 'P');
	int KLL = OPCODE('K', 'I', 'L', 'L');
	int HCF = OPCODE(' ', 'H', 'C', 'F');

	int AND = OPCODE(' ', 'A', 'N', 'D');
	int  OR = OPCODE(' ', ' ', 'O', 'R');
	int XOR = OPCODE(' ', 'X', 'O', 'R');
	int NOR = OPCODE(' ', 'N', 'O', 'R');
	int NOT = OPCODE(' ', 'N', 'O', 'T');
	int LSR = OPCODE(' ', 'L', 'S', 'R');
	int LSL = OPCODE(' ', 'L', 'S', 'L');

	int MOV = OPCODE(' ', 'M', 'O', 'V');
	int SWP = OPCODE(' ', 'S', 'W', 'P');
	int PSH = OPCODE('P', 'U', 'S', 'H');
	int POP = OPCODE(' ', 'P', 'O', 'P');
	int LEA = OPCODE(' ', 'L', 'E', 'A');
	int  IN = OPCODE(' ', ' ', 'I', 'N');
	int OUT = OPCODE(' ', 'O', 'U', 'T');
	int END = OPCODE(' ', 'E', 'N', 'D');

	printf("ADD: %d\n", ADD);
	printf("SUB: %d\n", SUB);
	printf("DIV: %d\n", DIV);
	printf("MUL: %d\n", MUL);
	printf("MOD: %d\n", MOD);

	printf("JMP: %d\n", JMP);
	printf("JNE: %d\n", JNE);
	printf("JEQ: %d\n", JEQ);
	printf("JGR: %d\n", JGR);
	printf("JLE: %d\n", JLE);
	printf("CMP: %d\n", CMP);
	printf("TST: %d\n", TST);
	printf("HLT: %d\n", HLT);
	printf("NOP: %d\n", NOP);
	printf("CLL: %d\n", CLL);
	printf("RET: %d\n", RET);
	printf("TRP: %d\n", TRP);
	printf("KLL: %d\n", KLL);
	printf("HCF: %d\n", HCF);

	printf("AND: %d\n", AND);
	printf("OR: %d\n", OR);
	printf("XOR: %d\n", XOR);
	printf("NOR: %d\n", NOR);
	printf("NOT: %d\n", NOT);
	printf("LSR: %d\n", LSR);
	printf("LSL: %d\n", LSL);

	printf("MOV: %d\n", MOV);
	printf("SWP: %d\n", SWP);
	printf("PSH: %d\n", PSH);
	printf("POP: %d\n", POP);
	printf("LEA: %d\n", LEA);
	printf("IN: %d\n", IN);
	printf("OUT: %d\n", OUT);
	printf("END: %d\n", END);

	return 0;
}
