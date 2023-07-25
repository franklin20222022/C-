#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < rows; x++) 
	{
		for (y = 0; y < cols; y++) 
		{
			board[x][y] = set;
		}
	}


}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++) 
	{
		printf("%d ",i);
	}
	printf("\n");

	for (i = 1; i <= row; i++) 
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
		
	}

}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count) 
	{
		int x = rand() % row + 1;//得到1-9的随机值
		int y = rand() % col + 1;//得到1-9的随机值
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int git_mine_count(char mine[ROWS][COLS], int x, int y)
{
	 return mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] - 8 *'0';


}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < COL * ROW - COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("踩雷喽，老铁\n");
				break;
				
			}
			else
			{
			int count = git_mine_count(mine, x, y) ;
			show[x][y] = count+'0';
			DisplayBoard(show, row, col);
			win++;
			}
		}
		else
		{
			printf("坐标非法请重新输入\n");
		}
	}
if (win == ROW * COL - COUNT)
{
	printf("排雷成功\n");
	DisplayBoard(mine, row, col);
}
	
}