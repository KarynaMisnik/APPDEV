#include <stdio.h>
#include "screen.h"

void clearScreen(void) {
	printf("\x1b[2J");
	fflush(stdout);
}
void goToXY(int x, int y) {
	printf("\x1b[%d;%dH", y, x);
	fflush(stdout);
}
void setFGcolor(int color) {
	printf("\x1b[%d;1m", color);
	fflush(stdout);
}

void setBGcolor(int color) {
	printf("\x1b[%dm", color+10);
	fflush(stdout);
}