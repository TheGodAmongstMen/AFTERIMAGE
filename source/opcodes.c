/*******************************************************************************
 * Program name: opcodes
 * Author: Magnet
 * Description: Contains functions for all the opcodes for AFTERIMAGE
*******************************************************************************/
#include "opcodes.h"
#include "structs.h"

// Arithmetic ops
void add(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 + r2;
}

void sub(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 - r2;
}

void div_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 / r2;
}

void mul(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 * r2;
}

void mod(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 % r2;
}

// Logic Ops
void and(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 & r2;
}

void or(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 | r2;
}

void xor(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 ^ r2;
}

void nor(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = ~(r1 | r2);
}

void not(int r1, struct regs *mem){
	mem->r1 = ~r1;
}

void lsr(int r1, int r3, int dist, struct regs *mem){
	mem->r3 = r1 >> dist;
}

void lsl(int r1, int r3, int dist, struct regs *mem){
	mem->r3 = r1 << dist;
}

// Misc ops
void mov(int r1, int r2, struct regs *mem){
	mem->r2 = r1;
}

void swp(int r1, int r2, struct regs *mem){
	mem->r1 = r2;
	mem->r2 = r1;
}
