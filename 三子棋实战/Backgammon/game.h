#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断是否获胜
char IsWin(char board[ROW][COL], int row, int col);