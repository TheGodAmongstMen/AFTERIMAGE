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

struct program_code fetch(char line[16]){
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
	decode(code);
	return code;
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

struct shell_code decode(struct program_code fetch) {
	printf("Decoding...\n");
	// Characters are just numbers
	struct shell_code decode;
	decode.op = (((fetch.opcode[0] - 1) << 6) | ((fetch.opcode[1] - 1) << 2) | (fetch.opcode[3]));
	decode.src1 = fetch.src1[1];
	decode.src2 = fetch.src2[1];
	decode.dest = fetch.dest[1];

	printf("Op: %d\nSrc1: %d\nSrc2: %d\nDest:%d", decode.op, decode.src1, decode.src2, decode.dest);
	return decode;
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

bool execute(struct shell_code decode) {
	
	return false;
} // execute
