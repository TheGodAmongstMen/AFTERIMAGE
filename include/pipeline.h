#ifndef PIPELINE_H
#define PIPELINE_H

#include "structs.h"
#include <stdlib.h>

void fetch(char line[16], struct regs *mem);
void decode(struct program_code fetch, struct regs *mem);
void execute(struct shell_code decode, struct regs *mem);

#endif
