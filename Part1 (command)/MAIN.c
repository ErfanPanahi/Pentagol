//written by:"ERFAN PANAHI 810198369"
#include <stdio.h>
#include "printing_board.h"
#include "updating_board.h"
#include "taking_turn_inserting.h"
#include "rotation.h"
#include "check_winning.h"
int main() {
	char board[6][6];
	printing_board(board);//showing the first board without inserting.
	int k;
	for (k = 0; k < 36; k++) {
		taking_turn_inserting(k, board);
		updating_board(board);
		rotation(board);
		updating_board(board);
		check_winning(board);
	}//end of for
	printf("the game finished without winner.");//after 36 turns if there wan't any L game finishes without any winner.
	return 0;
}