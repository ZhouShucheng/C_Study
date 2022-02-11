#pragma once

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#define ROW 3
#define COL 3

//游戏开始页面
void startPage();

//玩游戏
void game();

//初始化棋盘
void initBoard(char board[ROW][COL]);

//打印棋盘
void printBoard(char board[ROW][COL]);

//玩家下棋
void playerMove(char board[ROW][COL]);

//电脑下棋
void computerMove(char board[ROW][COL]);

//判断是否赢
char isWin(char board[ROW][COL]);
