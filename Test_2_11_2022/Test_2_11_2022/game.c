#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void startPage() {
	printf("*************************************\n");
	printf("********       1. play        *******\n");
	printf("********       0. exit        *******\n");
	printf("*************************************\n");
}

void initBoard(char board[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}

void printBoard(char board[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf(" %c ", board[i][j]);
			if (j < (COL - 1)) {
				printf("|");
			}
		}
		printf("\n");
		
		if (i < (ROW - 1)) {
			for (j = 0; j < ROW; j++) {
				printf("---");
				if (j < (COL - 1)) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playerMove(char board[ROW][COL]) {
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	printf("请输入一个坐标:>");
	while (1) {
		scanf("%d %d", &x, &y);
		if (x > 0 && y > 0 && x <= ROW && y <= COL) {
			//判断坐标是否被占用
			if (' ' == board[x - 1][y - 1]) {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("坐标已被占用，请重新输入:>");
			}
		}
		else {
			printf("坐标非法，请重新输入:>");
		}
	}
}

//电脑下棋
void computerMove(char board[ROW][COL]) {
	printf("电脑走:>\n");

	srand(time(NULL));

	while (1) {
		int x = rand() % ROW;
		int y = rand() % COL;
		//判断坐标是否被占用
		if (' ' == board[x][y]) {
			board[x][y] = '#';
			break;
		}
	}
}

//如果棋盘满了返回1， 不满返回0
int isFull(char board[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

//判断是否赢
char isWin(char board[ROW][COL]) {
	int i = 0;
	//判断行
	for (i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}

	//判断列
	for (i = 0; i < COL; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	//如果棋盘满了返回1， 不满返回0
	int ret = isFull(board);
	if (ret) {
		return 'Q';
	}

	//继续
	return 'C';
}