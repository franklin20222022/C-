#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PeoInfo data[MAX];//ͨѶ¼��Ϣ
	int size;//ͨѶ¼����
};
//��������

//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* pc);
//����ͨѶ¼�ĺ���
 void AddContact(struct Contact* pc);
 //
void  ShowContacat(struct Contact *pc);