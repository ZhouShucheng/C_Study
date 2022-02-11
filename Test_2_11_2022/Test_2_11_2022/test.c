#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game() {
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//初始化棋盘的数据
	initBoard(board);
	//打印棋盘
	printBoard(board);
	//下棋
	while (1) {
		//玩家下棋
		playerMove(board);
		printBoard(board);
		//判断是否赢
		ret = isWin(board);
		if (ret != 'C')
			break;
		
		//电脑下棋
		computerMove(board);
		printBoard(board);
		ret = isWin(board);
		if (ret != 'C')
			break;
	}

	if ('*' == ret)
		printf("玩家赢了！\n");
	else if ('#' == ret)
		printf("电脑赢了！\n");
	else
		printf("平局！\n");
	printBoard(board);
}

int main() {
	int input = 0;
	do {
		startPage();
		printf("请选择：>");
		scanf("%d", &input);
		//input = getchar();
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出！\n");
			return 0;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}