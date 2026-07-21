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
*******************************************************************************/

void add(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 + r2;
}

/*******************************************************************************
 * Function name: sub
 * Description: SUBs r2 from r1 and stores it in r3
*******************************************************************************/

void sub(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 - r2;
}

/*******************************************************************************
 * Function name: div
 * Description: Divides r1 by r2
*******************************************************************************/

void div_op(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 / r2;
}

/*******************************************************************************
 * Function name: mul
 * Description: multiplies r1 by r2 and stores it in r3
*******************************************************************************/

void mul(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 * r2;
}

/*******************************************************************************
 * Function name: mod
 * Description: r1 mod r2 and stores it in r3
*******************************************************************************/

void mod(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 % r2;
}

/*******************************************************************************
 * Function name: and 
 * Description: bitwise and
*******************************************************************************/

void and(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 & r2;
}

/*******************************************************************************
 * Function name: or
 * Description: bitwise or
*******************************************************************************/

void or(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 | r2;
}

/*******************************************************************************
 * Function name: xor
 * Description: bitwise xor
*******************************************************************************/

void xor(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = r1 ^ r2;
}

/*******************************************************************************
 * Function name: nor
 * Description: bitwise nor
*******************************************************************************/

void nor(int r1, int r2, int r3, struct regs *mem){
	mem->r3 = ~(r1 | r2);
}

/*******************************************************************************
 * Function name: not
 * Description: bitwise not
*******************************************************************************/

void not(int r1, struct regs *mem){
	mem->r1 = ~r1;
}

/*******************************************************************************
 * Function name: lsr
 * Description: shift right
*******************************************************************************/

void lsr(int r1, int r3, int dist, struct regs *mem){
	mem->r3 = r1 >> dist;
}

/*******************************************************************************
 * Function name:  lsl
 * Description: shift left
*******************************************************************************/

void lsl(int r1, int r3, int dist, struct regs *mem){
	mem->r3 = r1 << dist;
}
