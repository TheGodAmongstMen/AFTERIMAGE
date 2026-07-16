/*******************************************************************************
 *
 * Program name: opcodes
 * Author: Magnet
 *
 * Description: Contains functions for all the opcodes for AFTERIMAGE
 *
*******************************************************************************/
#include "opcodes.h"
#include "structs.h"
#include <stdio.h> //for debugging

/*******************************************************************************
 * Function name: add
 * Description: ADDs r1 to r2 and stores it in r3
 * Inputs: r1, r2
 * Outputs: none
*******************************************************************************/

void add_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 + r2;
}

/*******************************************************************************
 * Function name: sub
 * Description: SUBs r2 from r1 and stores it in r3
 * Inputs: r1, r2, r3
 * Outputs: none
*******************************************************************************/

void sub_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 - r2;
}

/*******************************************************************************
 * Function name: div
 * Description: Divides r1 by r2
 * Inputs: r1, r2, r3
 * Outputs: none
*******************************************************************************/

void div_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 / r2;
}

/*******************************************************************************
 * Function name: mul
 * Description: multiplies r1 by r2 and stores it in r3
 * Inputs: r1, r2, r3
 * Outputs: none
*******************************************************************************/

void mul_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 * r2;
}

/*******************************************************************************
 * Function name: mod
 * Description: r1 mod r2 and stores it in r3
 * Inputs: r1, r2
 * Outputs: none
*******************************************************************************/

void mod_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 % r2;
}

/*******************************************************************************
 *
 * Function name: 
 * Author:
 *
 * Description:
 * Inputs:
 * Outputs: 
 * Pseudo-code:
 * Begin
 *
 * End
*******************************************************************************/

