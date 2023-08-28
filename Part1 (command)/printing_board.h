#include <stdio.h>
char printing_board(char board[6][6]) {
	int i, j;
	for (i = 0; i<6; i++)//first value for array
		for (j = 0; j < 6; j++) {
			board[i][j] = '.';
		}//end of for
	printf("\t1\t2\t3\t|\t4\t5\t6\n\n");
	for (i = 0; i < 6; i++) {//this loop shows every line in pranting board
		if (i == 3)
			printf("--\t--\t--\t--\t\t--\t--\t--\n\n\n");
		printf("%d\t%c\t%c\t%c\t|\t%c\t%c\t%c\n\n\n", i + 1, board[i][0], board[i][1], board[i][2], board[i][3], board[i][4], board[i][5]);
	}//end of for
}
