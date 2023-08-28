//written by:"ERFAN PANAHI 810198369"
#include "graphics.h"
#include <stdio.h>
#include "printing_board.h"
#include "taking_turn_inserting.h"
#include "rotation.h"
#include "check_winning.h"
int main() {
	initwindow(310, 400, "pentagol");
	char board[6][6];
	printing_board(board);//showing the first board without inserting.
	int k;
	for (k = 0; k < 36; k++) {
		if (!kbhit()) {
			taking_turn_inserting(k, board);
			rotation(board);
		}//end of if
		check_winning(board);
	}//end of for
	setfillstyle(SOLID_FILL, 0);//after 36 turns if there wan't any L game finishes without any winner.
	floodfill(120, 320, 9);
	setcolor(15);
	outtextxy(20, 340, "The game finished without winner.");
	getch();
}