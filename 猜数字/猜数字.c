#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	int sum_y = 0;//用户输入的值
	int sum_s = rand() % 100 + 1;//保存随机值
	while (1)
	{
		printf("请输入数值:");
		scanf("%d/n", &sum_y);
		if (sum_y > sum_s) 
		{
			printf("大了\n");
		}
		else if (sum_y < sum_s)
		{
			printf("小了\n");
		}
		else 
		{
			printf("对了\n");
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
		printf("猜数字游戏，输入“1”开始，输入“0”退出\n");
		scanf("%d", &sum);
		switch (sum)
		{
		case 1:
			game();
			break;

		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
		
	} while (sum); //退出循环，程序结束
	return 0;

}
