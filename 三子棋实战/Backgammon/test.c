#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
    printf("****************************************\n");
    printf("*************    1.paly    *************\n");
    printf("*************    0.exit    *************\n");
    printf("****************************************\n");
}

void game()
{
    //存储数据 —— 二维数组
    char board[ROW][COL];
    //初始化棋盘，把数组内都放为空格
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);

    char ret = 0;//接收游戏状态

    while (1)
    {
        //玩家下棋
        PlayMove(board, ROW, COL); 
        system("cls");
        DisplayBoard(board, ROW, COL);
        
        //判断是否赢得游戏
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;

        //电脑下棋
        ComputerMove(board, ROW, COL);
        system("cls");
        DisplayBoard(board, ROW, COL);

        //判断是否赢得游戏
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }


    if (ret == 'X')
    {
        system("cls");
        printf("****************************************\n");
        printf("************    玩家获胜    ************\n");
        printf("****************************************\n");
        system("cls");
        DisplayBoard(board, ROW, COL);
        // 清空输入缓冲区
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("按任意键关闭...\n");
        getchar(); // 等待用户输入任意字符
    }
    else if (ret == 'O')
    {
        system("cls");
        printf("****************************************\n");
        printf("************    电脑获胜    ************\n");
        printf("****************************************\n");
        
        DisplayBoard(board, ROW, COL);
        // 清空输入缓冲区
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("按任意键关闭...\n");
        getchar(); // 等待用户输入任意字符;
    }
    else
    {
        system("cls");
        printf("****************************************\n");
        printf("************      平局      ************\n");
        printf("****************************************\n");
        // 清空输入缓冲区
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("按任意键关闭...\n");
        getchar(); // 等待用户输入任意字符
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        system("cls");
        menu();//首先打印菜单
        printf("请选择：->");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            system("cls");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            exit(1);
            break;
        default:
            printf("选择错误重新选择\n");
            break;
        }
    } while (input);
}