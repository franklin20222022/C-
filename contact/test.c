
#include "contact.h"


void menu()
{
	printf("*******       Contact       **********\n");
	printf("*******1.add      2.del     **********\n");
	printf("*******3.search   4.modify  **********\n");
	printf("*******5.show     6.sort    **********\n"); 
	printf("*******0.exit               **********\n");
	printf("**************************************\n");
	printf("**************************************\n");
}


int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do 
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			//
			break;
		case 3:
			//
			break;
		case 4:
			//
			break;
		case 5:
			ShowContacat(&con);
			break;
		case 6:
			//
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("�������");

		}


	} while (input);


}