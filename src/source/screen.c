#include <tonc.h>
#include <tonc_tte.h>
#include <stdio.h>
#include "fonts.h"

int main(){
	REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;

	// make da colors
	COLOR border = RGB15(0, 30, 31);
	COLOR shell = RGB15(17, 17, 22);
	COLOR NEONGREEN = RGB15(7, 31, 17);

	//fill screen dark 
	m3_fill(RGB15(5, 2, 2));

	// rectangle for funs
	m3_rect(15, 15, 225, 145, shell);
	m3_frame(15, 15, 225, 145, border);

	tte_init_bmp(3, &cyber16Font, NULL);
	tte_set_ink(RGB15(31,31,31));

	// print at 
	tte_printf("AFTERIMAGE");


	while(1);

	return 0;

} // main
