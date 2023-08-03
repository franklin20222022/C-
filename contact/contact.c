#include "contact.h"

void InitContact(struct Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;//通讯录最初有0个元素
	
}
void AddContact(struct Contact* pc)
{
	if (pc->size == MAX)
	{
		printf("通讯录已满，无法继续加入");
	}
	else
	{
		printf("输入名字:");
		scanf("%s", pc->data[pc->size].name);
		printf("请输入年龄:");
		scanf("%d", &(pc->data[pc->size].age));
		printf("请输入性别:");
		scanf("%s", pc->data[pc->size].sex);
		printf("请输入电话:");
		scanf("%s", pc->data[pc->size].tele);
		printf("请输入地址:");
		scanf("%s", pc->data[pc->size].addr);
		pc->size++;
		printf("添加成功\n");

	}
}

void  ShowContacat(struct Contact* pc)
{
	int i = 0;
	if (pc->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		//标题
		printf("%-20s %-4s %-5s %-12s %-20s \n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < pc->size; i++)
		{
			printf("%-20s %-4d %-5s %-12s %-20s \n",
				pc->data->name,
				pc->data->age,
				pc->data->sex,
				pc->data->tele,
				pc->data->addr);
		}
	}
}



