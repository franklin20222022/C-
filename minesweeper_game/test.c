#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

game()
{
	//�������̴�С
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0'); //ʵ�ʲ��׵�����
	InitBoard(show, ROWS, COLS, '*');//չʾ���û������̲���̨
	//��ӡ������Ϣ
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//���������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//��ʼɨ��
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
			printf("��Ϸ���˳�");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
	return 0;
}