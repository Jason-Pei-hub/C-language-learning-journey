# C语言实战—三子棋



> 我们截止到今天为止已经学习了关于C语言的相关简介，C语言的函数，C语言的数组
>
> 那么，我们今天就用我们学到的知识来进行一个小小的游戏项目
>
> 跟着我一起试试，相信你一定会有所收获



## 前期准备

一个小小的三子棋游戏项目

我们一共需要几个文件呢？

```c
test.c       测试游戏的逻辑
game.h       关于游戏相关的函数声明，符号声明，头文件包含
game.c       游戏相关函数的实现
```



## 游戏开发流程

我们首先创建源文件

![image-20240319144914984](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403191449042.png)



### 菜单的创建

首先呢，我们肯定要有一个菜单

```c
void menu()
{
    printf("****************************************\n");
    printf("*************    1.paly    *************\n");
    printf("*************    0.exit    *************\n");
    printf("****************************************\n");
}
```



##### 我们如何才能玩完以后能够再玩一次，而不退出呢？

同样也很简单，我们需要使用循环，那么我们分析一下，在第一次程序执行过程中，我们应该是先执行，在判断要不要再玩一次

所以我们使用的是do while循环

```c
int main()
{
    int input = 0;
    do
    {
        menu();//首先打印菜单
        printf("请选择：->");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("三子棋游戏\n");
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误重新选择\n");
            break;
        }
    } while (input);//这里如果我们选择的不是0，就会一直进入循环
}
```



我们先来测试一下当前的代码能否正常使用

![image-20240319150936346](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403191509386.png)

可以看到当前的程序可以正常运行，我们就可以继续下一步的编写



> 注意，千万不要一上来写了几百行代码再去验证，如果真的有重大问题怎么办？从最简单的结构开始，没问题在进行下一步的开发



## 游戏主函数



那接下来，我们要来实现这个游戏的主要函数

```c
void game()
{
    //存储数据 —— 二维数组
    char board[3][3];
    //那这里就出现了一个问题，如果我们以后想更新成五子棋呢？难道还要回来改吗？
    //nonono，这个时候game.h就派上了用场
}
```



### 棋盘的绘制

game.h

```c
#define ROW 3
#define COL 3
```



所以我们在test.c中就可以这么写

```c
void game()
{
    //存储数据 —— 二维数组
    char board[ROW][COL];
    //初始化棋盘，把数组内都放为空格
    InitBoard(board,ROW,COL);
    
}
```



那这里又多出来了一个函数，我们还是现在game.h里面声明

```c
//符号的定义
#define ROW 10
#define COL 10

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
```



再在game.c里面开始完成这个函数功能的实现

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

InitBoard(char board[ROW][COL], int row, int col)
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
```



那接下来是不是应该打印一下棋盘看一下实现的效果

test.c

```c
void game()
{
    //存储数据 —— 二维数组
    char board[ROW][COL];
    //初始化棋盘，把数组内都放为空格
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
}
```

game.h

```c
//打印棋盘
DisplayBoard(char board[ROW][COL], int row, int col);
```

game.c

```c
DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if(i < row-1)
            //这里判断语句防止最后多打印一行分割
			printf("---|---|---\n");
	}
}
```

看实现效果怎么样

![image-20240319155644461](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403191556496.png)

可以看到我们预期的效果是不错的

但是这种写法好吗？

如果我们把行数和列数都改为别的数字，还会正确吗？

很显然这种写法是十分不合适的

所以我们再来改进一下

```c
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
```

如果我们这样子来打印棋盘，当我们棋盘行列发生改变时，棋盘也是可以正常显示的

![image-20240319190501843](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403191905884.png)

即使是我们把行和列都改为10，显示也是正确的

![image-20240319190538548](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403191905585.png)



**那接下来，我们需要做的事情就是**

* 玩家走一步
* 电脑走一步



## 主要流程的实现

```c
void game()
{
    //存储数据 —— 二维数组
    char board[ROW][COL];
    //初始化棋盘，把数组内都放为空格
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);

    while (1)
    {
        //玩家下棋
        //电脑下棋
    }
}
```

我们就需要两个函数来实现这两个步骤

### 玩家下棋

```c
PlayMove(board,ROW,COL);
```

>  我们需要考虑的有：

* 玩家输入的坐标是否合理
* 玩家输入的坐标是否被占用



很简单，我们只需要去判断数组内部是不是'空格'就好，如果是，就把这个坐标的空格改为X

那输入的坐标重复了怎么办，其实也很简单，我们在外面设立一个大的while循环

在输入错误的时候打印错误信息直接进入下一次循环就行

```c
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
			if (board[x - 1][y - 1] == ' ')//这里要注意数组的下标是从零开始
			{
				board[x - 1][y - 1] = 'X';
				break;//我们下棋的时候只能走一步，所以要加上break跳出循环
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
```

我们来看一下效果

![image-20240319193137806](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403191931843.png)

### 电脑下棋

```c
ComputerMove(board, ROW, COL);  //电脑下棋
DisplayBoard(board, ROW, COL);//打印棋盘
```

那么我并不想仅仅让电脑只是随机落子

我把电脑下棋分为以下几个步骤：

* 检查棋盘，判断是否有可以获胜的位置
* 检查棋盘，判断是否有需要防守的位置
* 如果都没有，随机落子

#### 检查棋盘，判断是否有可以获胜的位置

因为我们今天的情况是三子棋

所以需要判断的情况很少，所以我们可以暴力一点，

我们直接遍历每一个位置，如果出现获胜的情况，就落子

#### 检查棋盘，判断是否有需要防守的位置

那这种情况也很简单

我们还是和上面一样

我们还是遍历每一个位置，但是这一次我们把自己当成玩家，如果玩家出现获胜的情况，电脑就落在这个位置

#### 如果都没有，随机落子

这个就不用过多赘述了



那么我们算法的核心就是，判断是否获胜，我们来写一下

当然，其实我们每走一步都需要判断一下，这样子才能判断游戏是继续进行还是直接结束

所以返回值类型我们设为字符串类型

```c
char IsWin(board,ROW,COL);
```

> 玩家赢了返回X，电脑获胜返回O，平局返回Q，继续游戏返回C

那么函数该怎么写呢？

我们将会逐行逐列的检查有没有连成三个的棋子

```c
char IsWin(char board[ROW][COL], int row, int col) {
    // 检查每行
    for (int i = 0; i < row; i++) {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
            return 'X'; // 玩家赢了
        } else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
            return 'O'; // 电脑赢了
        }
    }

    // 检查每列
    for (int j = 0; j < col; j++) {
        if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X') {
            return 'X'; // 玩家赢了
        } else if (board[0][j] == 'O' && board[1][j] == 'O' && board[2][j] == 'O') {
            return 'O'; // 电脑赢了
        }
    }

    // 检查对角线
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
        return 'X'; // 玩家赢了
    } else if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
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
```

实现逻辑不是很难，我这里就直接放代码了

那么

接下来，我们开始先遍历一遍棋盘，如果出现获胜情况直接落子

```c
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
```

如果这种情况不是呢，就把刚刚测试的情况改回来

**接下来判断防守**

我们只需要把自己当成玩家，再重复刚刚的步骤

```c
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
```

如果都没有就随机落子

```C
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
```

#### 我们来测试一下效果如何

![image-20240319203751928](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403192037992.png)

我们可以看到，目前来说，电脑已经具备了简单的对抗能力

## 判断胜负

具体的函数我们在前面已经完成了，这里不过多赘述

主要说的是game函数拿到返回值如何操作

```c
    char ret = 0;//接收游戏状态

    while (1)
    {
        //玩家下棋
        PlayMove(board, ROW, COL); 
        DisplayBoard(board, ROW, COL);
        
        //判断是否赢得游戏
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;

        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);

        //判断是否赢得游戏
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }


    if (ret == 'X')
    {
        printf("****************************************\n");
        printf("************    玩家获胜    ************\n");
        printf("****************************************\n");
        DisplayBoard(board, ROW, COL);
    }
    else if (ret == 'O')
    {
        printf("****************************************\n");
        printf("************    电脑获胜    ************\n");
        printf("****************************************\n");
        DisplayBoard(board, ROW, COL);
    }
    else
    {
        printf("****************************************\n");
        printf("************      平局      ************\n");
        printf("****************************************\n");
        DisplayBoard(board, ROW, COL);
    }
}    char ret = 0;//接收游戏状态

    while (1)
    {
        //玩家下棋
        PlayMove(board, ROW, COL); 
        DisplayBoard(board, ROW, COL);
        
        //判断是否赢得游戏
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;

        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);

        //判断是否赢得游戏
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }

    if (ret == 'X')
    {
        printf("玩家获胜\n");
        DisplayBoard(board, ROW, COL);
    }
    else if (ret == 'O')
    {
        printf("电脑获胜\n");
        DisplayBoard(board, ROW, COL);
    }
    else
    {
        printf("平局\n");
        DisplayBoard(board, ROW, COL);
    }
```



## 结尾

好的，那么到目前为止，我们的游戏已经写的差不多了，如果你觉得屏幕上太多棋盘看的眼花，你可以加一个

```c
system("cls");
```

注意，要在每一个打印棋盘前面加上



同时，我们也需要在结算页面加上后续操作，让我们的程序可读性更好

```c
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
```



我们先来测试一下

![image-20240319205901882](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403192059922.png)

电脑可以完成对抗

![image-20240319205926617](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403192059656.png)

当我们随机输入一个数字后

![image-20240319205946927](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403192059963.png)

重新回到主菜单

我们在主函数中添加exit(1);，程序就可以完成退出操作

```c
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
```

我们来看效果

![image-20240319210104501](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403192101542.png)

可以成功实现



三子棋游戏的开发实际上算不上难，如果大家感兴趣我们还可以让电脑变得更强

我先把我们开发游戏的游戏源码放在下面，大家感兴趣可以一起跟着过一遍，一定会对整体项目开发思维有所启发！！

test.c

```c
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
```

game.h

```c
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
```

game.c

```c
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
```



我们通过修改电脑的逻辑还能让电脑变得更强，不过这就是后话了



> 在运行代码或者阅读时遇到的各种问题都可以私信问我，我一定尽力解答

---

## 感谢您的阅读！！！

