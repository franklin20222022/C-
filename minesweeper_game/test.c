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
			printf("��Ϸ���˳�");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
	return 0;
}