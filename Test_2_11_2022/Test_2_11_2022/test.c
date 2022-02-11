#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game() {
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//��ʼ�����̵�����
	initBoard(board);
	//��ӡ����
	printBoard(board);
	//����
	while (1) {
		//�������
		playerMove(board);
		printBoard(board);
		//�ж��Ƿ�Ӯ
		ret = isWin(board);
		if (ret != 'C')
			break;
		
		//��������
		computerMove(board);
		printBoard(board);
		ret = isWin(board);
		if (ret != 'C')
			break;
	}

	if ('*' == ret)
		printf("���Ӯ�ˣ�\n");
	else if ('#' == ret)
		printf("����Ӯ�ˣ�\n");
	else
		printf("ƽ�֣�\n");
	printBoard(board);
}

int main() {
	int input = 0;
	do {
		startPage();
		printf("��ѡ��>");
		scanf("%d", &input);
		//input = getchar();
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳���\n");
			return 0;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}