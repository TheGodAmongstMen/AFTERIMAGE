#include "pipeline.h"
#include "utilities.h"
#include <stdio.h>

int main(void){
	struct regs *mem = reg_setup();
	/*FILE *fp = fopen("test.txt", "r");

	if(fp == NULL) {
		printf("Error opening file\n");
		return 1;
	}
	char buffer[16];
	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("\n%s", buffer);
		fetch(buffer, mem);
	}
	fclose(fp);*/
	printf("R1: %d\nR2: %d\nR3: %d\n", mem->r1, mem->r2, mem->r3);

	mem->r1 = 5;
	mem->r2 = 10;

	printf("\n");
	printf("R1: %d\nR2: %d\nR3: %d\n", mem->r1, mem->r2, mem->r3);
	printf("\n");

	struct shell_code line;
	line.op = 19958;
	line.src1 = mem->r1;
	line.src2 = mem->r2;
	line.dest = mem->r3;
	execute(line, mem);
	
	printf("R1: %d\nR2: %d\nR3: %d\n", mem->r1, mem->r2, mem->r3);
	return 1;
}
