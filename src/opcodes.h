#ifndef OPCODES_H
#define OPCODES_H

#define ADD 17732
#define SUB 22354
#define DIV 17622
#define MUL 19804
#define MOD 19956
#define JMP 20176
#define JNE 20197
#define JEQ 20049
#define JGR 20082
#define JLE 20165
#define CMP 18384
#define TST 21876
#define HLT 19668
#define NOP 20208
#define CLL 18380
#define RET 22100
#define TRP 21872
#define KLL 20428
#define HCF 19574
#define AND 17892
#define  OR 9458
#define XOR 23794
#define NOR 20210
#define NOT 20212
#define LSR 19826
#define LSL 19836
#define MOV 19958
#define SWP 22384
#define PSH 21880
#define POP 21744
#define LEA 19537

#include "structs.h"

// Arithmetic Ops
void add(int r1, int r2, int r3, struct regs *mem);
void sub(int r1, int r2, int r3, struct regs *mem);
void div_op(int r1, int r2, int r3, struct regs *mem);
void mul(int r1, int r2, int r3, struct regs *mem);
void mod(int r1, int r2, int r3, struct regs *mem);

// Jump Ops
// TODO: Figure out how I want jump to work

// Logic Ops
void and(int r1, int r2, int r3, struct regs *mem);
void or(int r1, int r2, int r3, struct regs *mem);
void xor(int r1, int r2, int r3, struct regs *mem);
void nor(int r1, int r2, int r3, struct regs *mem);
void not(int r1, struct regs *mem);
void lsr(int r1, int r3, int dist, struct regs *mem);
void lsl(int r1, int r3, int dist, struct regs *mem);

// Misc Ops
void mov(int r1);
void swp(int r1, int r2);
//int psh(int r1);
//int pop(int r1);
//int lea();

#endif
