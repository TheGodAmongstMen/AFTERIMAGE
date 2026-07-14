#ifndef PIPELINE_H
#define PIPELINE_H

#include "structs.h"
#include <stdlib.h>

struct program_code fetch(char line[16]);
struct shell_code decode(struct program_code fetch);
bool execute(struct shell_code decode);

#endif
