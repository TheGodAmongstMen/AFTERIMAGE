/*******************************************************************************
 *
 * Program name: pipeline
 * Author: Magnet
 *
 * Description: This file contains the functions that run the three-stage 
 * in order pipeline that drives the SIGHTLINE systems.
 *
*******************************************************************************/


/*******************************************************************************
 *
 * Function name: fetch
 * Author: Magnet
 *
 * Description: Grab and parse through next line of user-written code, update PC
 * Inputs: pointer to PC, code
 * Outputs: Line struct 
 * Pseudo-code:
 *
*******************************************************************************/

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
	// Characters are just numbers
	struct shell_code decode;
	decode.op = fetch.opcode[0] + fetch.opcode[1] + fetch.opcode[2] + fetch.opcode[3];
	decode.src1 = fetch.src1[1];
	decode.src2 = fetch.src2[1];
	decode.dest = fetch.dest[1];

	return decode;
}

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
#include opcodes.h

bool execute(struct shell_code decode) {
	

}
