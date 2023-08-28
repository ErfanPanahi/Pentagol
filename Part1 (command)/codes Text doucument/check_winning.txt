#include <stdio.h>
char check_winning(char board[6][6]) {
	int i, j, checkb = 0, checkw = 0;
	for (j = 0; j<3; j++)//check L in skewed mode like'\'
		for (i = 0; i < 3; i++) {
			if (board[i][j] == 'b' && board[i + 1][j + 1] == 'b' && board[i + 2][j + 2] == 'b' && board[i + 3][j + 3] == 'b') {
				if (board[i - 1][j + 1] == 'b' || board[i + 1][j - 1] == 'b' || board[i + 4][j + 2] == 'b' || board[i + 2][j + 4] == 'b') {
					checkb++;
				}
			}
			if (board[i][j] == 'w' && board[i + 1][j + 1] == 'w' && board[i + 2][j + 2] == 'w' && board[i + 3][j + 3] == 'w') {
				if (board[i - 1][j + 1] == 'w' || board[i + 1][j - 1] == 'w' || board[i + 4][j + 2] == 'w' || board[i + 2][j + 4] == 'w') {
					checkw++;
				}
			}
		}
	for (j = 0; j<3; j++)//check L in skewed mode like'/'
		for (i = 3; i < 6; i++) {
			if (board[i][j] == 'b' && board[i - 1][j + 1] == 'b' && board[i - 2][j + 2] == 'b' && board[i - 3][j + 3] == 'b') {
				if (board[i - 1][j - 1] == 'b' || board[i + 1][j + 1] == 'b' || board[i - 2][j + 4] == 'b' || board[i - 4][j + 2] == 'b') {
					checkb++;
				}
			}
			if (board[i][j] == 'w' && board[i - 1][j + 1] == 'w' && board[i - 2][j + 2] == 'w' && board[i - 3][j + 3] == 'w') {
				if (board[i - 1][j - 1] == 'w' || board[i + 1][j + 1] == 'w' || board[i - 2][j + 4] == 'w' || board[i - 4][j + 2] == 'w') {
					checkw++;
				}
			}
		}
	for (j = 0; j<5; j++)//check L in vertical mode
		for (i = 0; i < 3; i++) {
			if (board[i][j] == 'b' && board[i + 1][j] == 'b' && board[i + 2][j] == 'b' && board[i + 3][j] == 'b') {
				if (board[i][j + 1] == 'b' || board[i][j - 1] == 'b' || board[i + 3][j + 1] == 'b' || board[i + 3][j - 1] == 'b') {
					checkb++;
				}
			}
			if (board[i][j] == 'w' && board[i + 1][j] == 'w' && board[i + 2][j] == 'w' && board[i + 3][j] == 'w') {
				if (board[i][j + 1] == 'w' || board[i][j - 1] == 'w' || board[i + 3][j + 1] == 'w' || board[i + 3][j - 1] == 'w') {
					checkw++;
				}
			}
		}
	for (i = 0; i<5; i++)//check L in landscape mode
		for (j = 0; j < 3; j++) {
			if (board[i][j] == 'b' && board[i][j + 1] == 'b' && board[i][j + 2] == 'b' && board[i][j + 3] == 'b') {
				if (board[i + 1][j] == 'b' || board[i - 1][j] == 'b' || board[i + 1][j + 3] == 'b' || board[i - 1][j + 3] == 'b') {
					checkb++;
				}
			}
			if (board[i][j] == 'w' && board[i][j + 1] == 'w' && board[i][j + 2] == 'w' && board[i][j + 3] == 'w') {
				if (board[i + 1][j] == 'w' || board[i - 1][j] == 'w' || board[i + 1][j + 3] == 'w' || board[i - 1][j + 3] == 'w') {
					checkw++;
				}
			}
		}
	if (checkb > 0 || checkw>0) {//check condition of winning
		if (checkw == checkb) {//if number of black L was the same of white,we won't have any winner.
			printf("Nobody has won!");
			exit(0);
		}
		else if (checkb > checkw) {//if number of black L was more than white,black will win.
			printf("Black player has won!\n");
			exit(0);
		}
		else if (checkb < checkw) {//if number of white L was more than black,white will win.
			printf("White player has won!\n");
			exit(0);
		}
	}
}