#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	int sum_y = 0;//�û������ֵ
	int sum_s = rand() % 100 + 1;//�������ֵ
	while (1)
	{
		printf("��������ֵ:");
		scanf("%d/n", &sum_y);
		if (sum_y > sum_s) 
		{
			printf("����\n");
		}
		else if (sum_y < sum_s)
		{
			printf("С��\n");
		}
		else 
		{
			printf("����\n");
			break;
		}
	}

	
}
int main()

{
	srand((unsigned int)time(NULL));
	int sum = 0;//
	do 
	{		
		printf("��������Ϸ�����롰1����ʼ�����롰0���˳�\n");
		scanf("%d", &sum);
		switch (sum)
		{
		case 1:
			game();
			break;

		case 0 :
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	} while (sum); //�˳�ѭ�����������
	return 0;

}
