#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < row - 1)
					printf("|");
			}
			printf("\n");
		}
			
	}
}

void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家回合：\n");
	while (1)
	{
		printf("请输入下棋的坐标：->");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑回合：\n");
	int i = 0;
	int j = 0;
	//判断电脑是否能够获胜
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				board[i][j] = 'O';
				char ret = IsWin(board, ROW, COL);
				if (ret == 'O')
					return 0;
				else
					board[i][j] = ' ';
			}
			
		}
	}
	//判断玩家是否需要防守
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				board[i][j] = 'X';
				char ret = IsWin(board, ROW, COL);
				if (ret == 'X')
				{
					board[i][j] = 'O';
					return 0;
				}
				else
					board[i][j] = ' ';
			}
		}
	}

	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] = ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}

}

char IsWin(char board[ROW][COL], int row, int col) {
	// 检查每行
	for (int i = 0; i < row; i++) {
		if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
			return 'X'; // 玩家赢了
		}
		else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
			return 'O'; // 电脑赢了
		}
	}

	// 检查每列
	for (int j = 0; j < col; j++) {
		if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X') {
			return 'X'; // 玩家赢了
		}
		else if (board[0][j] == 'O' && board[1][j] == 'O' && board[2][j] == 'O') {
			return 'O'; // 电脑赢了
		}
	}

	// 检查对角线
	if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
		(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
		return 'X'; // 玩家赢了
	}
	else if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
		(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
		return 'O'; // 电脑赢了
	}

	// 检查是否平局
	int totalMoves = row * col;
	int movesPlayed = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] != ' ') {
				movesPlayed++;
			}
		}
	}
	if (movesPlayed == totalMoves) {
		return 'Q'; // 平局
	}

	return 'C'; // 继续
}