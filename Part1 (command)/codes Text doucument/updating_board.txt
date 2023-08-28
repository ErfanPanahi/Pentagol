#include <stdio.h>
char updating_board(char board[6][6]) {
	system("cls");
	int i;
	printf("\t1\t2\t3\t|\t4\t5\t6\n\n");
	for (i = 0; i < 6; i++) {//updating board with last changes in array
		if (i == 3)
			printf("--\t--\t--\t--\t\t--\t--\t--\n\n\n");
		printf("%d\t%c\t%c\t%c\t|\t%c\t%c\t%c\n\n\n", i + 1, board[i][0], board[i][1], board[i][2], board[i][3], board[i][4], board[i][5]);
	}
}