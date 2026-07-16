/*******************************************************************************
 *
 * Program name: pipeline
 * Author: Magnet
 *
 * Description: This file contains the functions that run the three-stage 
 * in order pipeline that drives the SIGHTLINE systems.
 *
*******************************************************************************/
#include "pipeline.h"

/*******************************************************************************
 *
 * Function name: fetch
 * Author: Magnet
 *
 * Description: Grab and parse through next line of user-written code, update PC
 * Inputs: pointer to PC, code
 * Outputs: Line struct 
 * Pseudo-code:
 * Begin
 * 	Set opcode 
 * 	Set src1
 * 	set src2
 * 	set dest
 * 	return
 * End
*******************************************************************************/
#include <stdio.h> //for debugging

void fetch(char line[16], struct regs *mem){
	// TODO: find a better way to parse through the data
	struct program_code code;
	code.opcode[0] = line[0];
	code.opcode[1] = line[1];
	code.opcode[2] = line[2];


	code.src1[0] = ' ';
	code.src1[1] = line[4];
	
	code.src2[0] = ' ';
	code.src2[1] = line[6];

	code.dest[0] = ' ';
	code.dest[1] = line[8];

	printf("Op: %s\nSrc1: %s\nSrc2: %s\nDest: %s\n", 
			code.opcode, code.src1, code.src2, code.dest);
	decode(code, mem);
	//you should call the next fetch here
} // fetch

/*******************************************************************************
 *
 * Function name: decode
 * Author: Magnet
 *
 * Inputs: code struct
 * Outputs: shell struct
 * Description: Parse line of code into ops, src, and dest
 * Pseudo-code: 
 * Begin
 * 	// Characters are just numbers
 * 	opcode = op[0] + op[1] + op[2] + op[3]
 * 	src1 = src1[1]
 * 	src2 = src2[1]
 * 	dest = dest[1]
 * End
 *
*******************************************************************************/

void decode(struct program_code fetch, struct regs *mem) {
	printf("Decoding...\n");
	// Characters are just numbers
	struct shell_code dec;
	dec.op = (((fetch.opcode[0] - 1) << 6) | ((fetch.opcode[1] - 1) << 2) | (fetch.opcode[3]));
	dec.src1 = fetch.src1[1];
	dec.src2 = fetch.src2[1];
	dec.dest = fetch.dest[1];

	printf("Op: %d\nSrc1: %d\nSrc2: %d\nDest:%d", dec.op, dec.src1, dec.src2, dec.dest);
	execute(dec, mem);
} // decode

/*******************************************************************************
 *
 * Function name: execute
 * Author: Magnet
 *
 * Inputs: shell struct
 * Outputs: bool valid
 * Description: Call and get output from functions
 * Pseudo-code:
 * Begin
 * 	
 * End
*******************************************************************************/
#include "opcodes.h"

void execute(struct shell_code decode, struct regs *mem) {
	//TODO: All of this
	if(decode.op == 4990)
		add_op(decode.src1, decode.src2, decode.dest, mem);
} // execute
