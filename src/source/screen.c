#include <tonc.h>
#include <stdio.h>

int main(){
	REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;

	// make da colors
	COLOR border = RGB15(0, 30, 31);
	COLOR shell = RGB15(17, 17, 22);
	COLOR NEONGREEN = RGB15(7, 31, 17);


	// text
	tte_init_chr4c(2, 	// BG 0
		BG_CBB(0)|BG_SBB(31), // charblock 0, screenblock 31
		0xF000,	//screen-entry offset
		bytes2word(1,2,0,0),
		NEONGREEN,
		&sys8Font,
		NULL
	);

	// use tte with stdio
	tte_init_con();
	// print at 
	tte_printf("#{P:96,72}AFTERIMAGE");


	//fill screen dark 
	m3_fill(RGB15(5, 2, 2));

	// rectangle for funs
	m3_rect(15, 15, 225, 145, shell);
	m3_frame(15, 15, 225, 145, border);
	while(1);

	return 0;

} // main
