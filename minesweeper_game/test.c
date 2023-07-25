#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

game()
{
	//定义雷盘大小
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	//初始化
	InitBoard(mine, ROWS, COLS, '0'); //实际藏雷的数据
	InitBoard(show, ROWS, COLS, '*');//展示给用户的雷盘操作台
	//打印雷盘信息
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//随机生成雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//开始扫雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	do 
	{
		printf("Minesweeper_game\n1 play\n0 exit\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出");
			break;
		default:
			printf("输入错误请重新输入");
			break;
		}
	} while (input);
	return 0;
}