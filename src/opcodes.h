#IFNDEF OPCODES.H
#DEFINE OPCODES.H

#define ADD 4428
#define SUB 5586
#define DIV 4598
#define MUL 4956
#define MOD 4988
#define JMP 4976
#define JNE 4981
#define JEQ 4945
#define JGR 4954
#define JLE 4973
#define CMP 4592
#define TST 5596
#define HLT 4604
#define NOP 4984
#define CLL 4588
#define RET 5460
#define TRP 5588
#define KLL 5100
#define HCF 4558
#define AND 4468
#define OR 2042
#define XOR 5626
#define NOR 4986
#define NOT 4988
#define LSR 5082
#define LSL 5068
#define MOV 4990
#define SWP 5592
#define PSH 5448
#define POP 5112
#define LEA 5073
#define IN 2030
#define OUT 5076

// Arithmetic Ops
int ADD(int src1, int src2);
int SUB(int src1, int src2);
int MUL(int src1, int src2);
int DIV(int src1, int src2);
int MOD(int src1, int src2);



#ENDIF
