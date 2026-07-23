#ifndef STRUCTS_H
#define STRUCTS_H

#define OPCODE(a, b, c) (((a - 1) << 6) | ((b - 1) << 2) | ((c)))

#include <stdint.h>
// register struct
struct regs {
	uint16_t ACC;
	uint32_t r1;
	uint32_t r2;
	uint32_t r3;
	uint32_t TEST;
	uint8_t FLE;
	uint32_t PC;
	uint32_t SP;
	uint32_t LR;
	uint32_t SIG;
	uint32_t RESERVED;
};

// struct for user written code
struct program_code {
	char opcode[3];
	char src1[2];
	char src2[2];
	char dest[2];
};

// struct for decoded code
struct shell_code {
	int op;
	int src1;
	int src2;
	int dest;
};


#endif
