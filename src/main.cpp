#include "pipeline.h"
#include <stdio.h>

int main(void){
	FILE *fp = fopen("test.txt", "r");

	if(fp == NULL) {
		printf("Error opening file\n");
		return 1;
	}
	char buffer[16];
	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("\n%s", buffer);
		fetch(buffer);
	}
	fclose(fp);
	return 1;
}
