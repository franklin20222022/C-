#include "contact.h"

void InitContact(struct Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;//ͨѶ¼�����0��Ԫ��
	
}
void AddContact(struct Contact* pc)
{
	if (pc->size == MAX)
	{
		printf("ͨѶ¼�������޷���������");
	}
	else
	{
		printf("��������:");
		scanf("%s", pc->data[pc->size].name);
		printf("����������:");
		scanf("%d", &(pc->data[pc->size].age));
		printf("�������Ա�:");
		scanf("%s", pc->data[pc->size].sex);
		printf("������绰:");
		scanf("%s", pc->data[pc->size].tele);
		printf("�������ַ:");
		scanf("%s", pc->data[pc->size].addr);
		pc->size++;
		printf("��ӳɹ�\n");

	}
}

void  ShowContacat(struct Contact* pc)
{
	int i = 0;
	if (pc->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		//����
		printf("%-20s %-4s %-5s %-12s %-20s \n", "����", "����", "�Ա�", "�绰", "��ַ");
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



