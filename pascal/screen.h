#pragma once
#include <stdio.h>
#define SIZE 100
enum COLORS {BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
//function declaration

void clearScreen(void);
void goToXY(int x, int y);
void setFGcolor(int c);
void setTerminalColor(void);
void setBGcolor(int c);

// comments conflicting