#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int main() 
{
	int input = 0;
	do 
	{
		printf("Minesweeper game\n1 play\n0 exit");
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