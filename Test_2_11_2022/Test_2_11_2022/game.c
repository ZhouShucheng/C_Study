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
	printf("�����:>\n");
	printf("������һ������:>");
	while (1) {
		scanf("%d %d", &x, &y);
		if (x > 0 && y > 0 && x <= ROW && y <= COL) {
			//�ж������Ƿ�ռ��
			if (' ' == board[x - 1][y - 1]) {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�����ѱ�ռ�ã�����������:>");
			}
		}
		else {
			printf("����Ƿ�������������:>");
		}
	}
}

//��������
void computerMove(char board[ROW][COL]) {
	printf("������:>\n");

	srand(time(NULL));

	while (1) {
		int x = rand() % ROW;
		int y = rand() % COL;
		//�ж������Ƿ�ռ��
		if (' ' == board[x][y]) {
			board[x][y] = '#';
			break;
		}
	}
}

//����������˷���1�� ��������0
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

//�ж��Ƿ�Ӯ
char isWin(char board[ROW][COL]) {
	int i = 0;
	//�ж���
	for (i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}

	//�ж���
	for (i = 0; i < COL; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	//����������˷���1�� ��������0
	int ret = isFull(board);
	if (ret) {
		return 'Q';
	}

	//����
	return 'C';
}