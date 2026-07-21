#include <stdio.h>

#define OPCODE(a, b, c) ((a << 8) | (b << 4) | (c)) 

int main(void) {
	int ADD = OPCODE('A', 'D', 'D');
	int SUB = OPCODE('S', 'U', 'B');
	int DIV = OPCODE('D', 'I', 'V');
	int MUL = OPCODE('M', 'U', 'L');
	int MOD = OPCODE('M', 'O', 'D');

	int JMP = OPCODE('J', 'M', 'P');
	int JNE = OPCODE('J', 'N', 'E');
	int JGR = OPCODE('J', 'G', 'R');
	int JEQ = OPCODE('J', 'E', 'Q');
	int JLE = OPCODE('J', 'L', 'E');
	int CMP = OPCODE('C', 'M', 'P');
	int TST = OPCODE('T', 'S', 'T');
	int HLT = OPCODE('H', 'L', 'T');
	int NOP = OPCODE('N', 'O', 'P');
	int CLL = OPCODE('C', 'L', 'L');
	int RET = OPCODE('R', 'E', 'T');
	int TRP = OPCODE('T', 'R', 'P');
	int KLL = OPCODE('K', 'L', 'L');
	int HCF = OPCODE('H', 'C', 'F');

	int AND = OPCODE('A', 'N', 'D');
	int  OR = OPCODE(' ', 'O', 'R');
	int XOR = OPCODE('X', 'O', 'R');
	int NOR = OPCODE('N', 'O', 'R');
	int NOT = OPCODE('N', 'O', 'T');
	int LSR = OPCODE('L', 'S', 'R');
	int LSL = OPCODE('L', 'S', 'L');

	int MOV = OPCODE('M', 'O', 'V');
	int SWP = OPCODE('S', 'W', 'P');
	int PSH = OPCODE('U', 'S', 'H');
	int POP = OPCODE('P', 'O', 'P');
	int LEA = OPCODE('L', 'E', 'A');

	printf("#define ADD %d\n", ADD);
	printf("#define SUB %d\n", SUB);
	printf("#define DIV %d\n", DIV);
	printf("#define MUL %d\n", MUL);
	printf("#define MOD %d\n", MOD);

	printf("#define JMP %d\n", JMP);
	printf("#define JNE %d\n", JNE);
	printf("#define JEQ %d\n", JEQ);
	printf("#define JGR %d\n", JGR);
	printf("#define JLE %d\n", JLE);
	printf("#define CMP %d\n", CMP);
	printf("#define TST %d\n", TST);
	printf("#define HLT %d\n", HLT);
	printf("#define NOP %d\n", NOP);
	printf("#define CLL %d\n", CLL);
	printf("#define RET %d\n", RET);
	printf("#define TRP %d\n", TRP);
	printf("#define KLL %d\n", KLL);
	printf("#define HCF %d\n", HCF);

	printf("#define AND %d\n", AND);
	printf("#define  OR %d\n", OR);
	printf("#define XOR %d\n", XOR);
	printf("#define NOR %d\n", NOR);
	printf("#define NOT %d\n", NOT);
	printf("#define LSR %d\n", LSR);
	printf("#define LSL %d\n", LSL);

	printf("#define MOV %d\n", MOV);
	printf("#define SWP %d\n", SWP);
	printf("#define PSH %d\n", PSH);
	printf("#define POP %d\n", POP);
	printf("#define LEA %d\n", LEA);

	return 0;
}
