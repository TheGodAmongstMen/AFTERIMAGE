/*******************************************************************************
 * Function name: reg_setup
 * Description: initializes and sets the memory registers
 * Inputs: None
 * Outputs: Pointer to register struct
*******************************************************************************/
#include <stdlib.h>
#include "structs.h"

struct regs* reg_setup(void){
	struct regs *mem = malloc(sizeof(struct regs));
	if (mem == NULL) {
		return NULL;
	}
	mem->ACC = 0;
	mem->r1 = 0;
	mem->r2 = 0;
	mem->r3 = 0;
	mem->TEST = 0;
	mem->FLE = 0;
	mem->PC = 0;
	mem->SP = 0;
	mem->LR = 0;
	mem->SIG = 0;
	mem->cycles = 0;
	return mem;
}
