#ifndef PIPELINE_H
#define PIPELINE_H

struct shell_code decode(struct program_code fetch);
bool execute(struct shell_code decode);

#endif
