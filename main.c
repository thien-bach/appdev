//This file will be used to test functions in screen.c

#include <stdio.h>
#include "screen.h"
#include <unistd.h>
#include "comm.h"
#include "sound.h"

int main(void){

	Position p = getscreensize();
	if(p.col<BARS){
		printf("Your screen size is not wide enough to display %d bars/n", BARS);
		return 1;
	}
	// use wget command to fetch a wav file from a URL
	// the following procedure can put into a forever loop (while(1))
	FILE *fp = fopen("test.wav", "r");	//open the wav file in read-only
	WAVheader h = readwavhdr(fp);
	displaywavhdr(h);
	getchar();
	clearscreen();
	wavdata(h,fp);
	fclose(fp);
	getchar();
	resetcolors();

	/*	for(int i=1; i<21; i++){
		getchar();
		clearscreen();
		gotoXY(21-i, i);
		setfgcolor(GREEN);
		printf("HELLO\n");
		setfgcolor(RED);
		drawrect(i, i, 2, 4);
		sleep(1);
	}
	getchar();
	 for(int i=1; i<21; i++){
		 getchar();
		clearscreen();
		gotoXY(i, 19+i);
		setfgcolor(GREEN);
		printf("HELLO\n");
		setfgcolor(RED);
		drawrect(21-i, 19+i, 2, 4);
		sleep(1);
	}*/
/*	setfgcolor(GREEN);
	gotoXY(14, 35);
	printf("HEllO, WORLD!\n");
	getchar();	//wait for user to press a key
	drawbar(30, 30);
	drawbar(50, 30);
	getchar();	//after drawing bars, wait for key
	resetcolors();
	printf("This text is displayed in default color \n");
*/
}
