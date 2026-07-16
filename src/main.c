#include "pipeline.h"
#include "utilities.h"
#include <stdio.h>

int main(void){
	struct regs *mem = reg_setup();
	FILE *fp = fopen("test.txt", "r");

	if(fp == NULL) {
		printf("Error opening file\n");
		return 1;
	}
	char buffer[16];
	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("\n%s", buffer);
		fetch(buffer, mem);
	}
	fclose(fp);

	return 1;
}
