#include <stdio.h>
int taking_turn_inserting(int k, char board[6][6]) {
	int turn, i, j;
	if (k % 2 == 0) {//black's turn
		turn = 'b';
		printf("black player's turn:\n");
	}
	else {//white's turn
		turn = 'w';
		printf("white player's turn:\n");
	}
	printf("enter your number:");
	while (1) {//this loop is for invalid inputs
		int input1;
		scanf("%d", &input1);
		getchar();
		j = (input1 % 10) - 1;
		i = (input1 / 10) - 1;
		if (i > 5 || i < 0 || j>5 || j < 0) {//invalid input (wrong number)
			printf("your input number is invalid.enter another number:\n");
			continue;
		}
		else if (board[i][j] != '.') {//invalid input (full place)
			printf("It is not empty.enter another number:\n");
			continue;
		}
		board[i][j] = turn;
		break;
	}//end of while
}