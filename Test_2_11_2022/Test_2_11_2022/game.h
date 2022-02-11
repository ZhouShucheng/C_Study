#pragma once

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#define ROW 3
#define COL 3

//��Ϸ��ʼҳ��
void startPage();

//����Ϸ
void game();

//��ʼ������
void initBoard(char board[ROW][COL]);

//��ӡ����
void printBoard(char board[ROW][COL]);

//�������
void playerMove(char board[ROW][COL]);

//��������
void computerMove(char board[ROW][COL]);

//�ж��Ƿ�Ӯ
char isWin(char board[ROW][COL]);
