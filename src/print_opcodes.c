#include <stdio.h>

int main(void) {
	int ADD = 'A' + 'D' + 'D';
	int SUB = 'S' + 'U' + 'B';
	int DIV = 'D' + 'I' + 'V';
	int MUL = 'M' + 'U' + 'L';
	int MOD = 'M' + 'O' + 'D';
	ADD = ADD >> 4;
	printf("ADD: %d\n", ADD);
	printf("SUB: %d\n", SUB);
	printf("DIV: %d\n", DIV);
	printf("MUL: %d\n", MUL);
	printf("MOD: %d\n", MOD);
	return 0;
}
