#ifndef STRUCTS_H
#define STRUCTS_H

#define OPCODE(a, b, c, d) (((a) << 24) | ((b) << 16) | ((c) << 8) | (d))

// register struct

// struct for user written code
struct program_code {
	char opcode[4];
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
