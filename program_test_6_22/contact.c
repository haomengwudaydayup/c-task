#define _CRT_SECURE_NO_WARNINGS 1
#include"concate.h"

void InitContact(Contact *Initperson)			//��ʼ��ʵ��
{
	Initperson->usedSize = 0;					//ʹ�ø�����ʼ��Ϊ0

	int i = 0;

	/*��ʼ��������Ϣ*/
	for (i = 0; i < MAX_NUMPERSIN; i++)
	{
		memset(Initperson->per, 0, sizeof(Initperson->per));
	}
}


/*ʵ�ָ�����Ϣ���*/
void AddContact(Contact *pCon)
{
	if (pCon->usedSize == MAX_NUMPERSIN)
	{
		printf("ͨѶ¼�洢����\n");
		exit(0);
	}
	printf("����������:>");
	scanf("%s", pCon->per[pCon->usedSize].name);
	printf("\n����������:>");
	scanf("%d", &(pCon->per[pCon->usedSize].age));
	printf("\n�������Ա�:>");
	scanf("%s", pCon->per[pCon->usedSize].sex);
	printf("\n������绰:>");
	scanf("%s", pCon->per[pCon->usedSize].tele);
	printf("\n�������ַ:>");
	scanf("%s", pCon->per[pCon->usedSize].addr);

	pCon->usedSize++;
}

/*�����������Ҹ�����Ϣ*/
int SearchContact(Contact *pCon, char *Searname)
{
	char *Searname = 0;
	int i = 0;
	if (pCon->usedSize == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		exit;
	}

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp((pCon->per[i].name), Searname) == 0)
		{
			printf("�ҵ��ˣ������ڵ�%d��λ��\n", i + 1);
			return i;
		}
	}
	return -1;
}

/*ɾ��Ԫ��*/
void DelContact(Contact *pCon)
{
	char *Delname = 0;
	int n = 0;
	int i = 0;
	printf("����������ɾ��������\n");
	scanf("%s", Delname);
	n = SearchContact(pCon, Delname);
	
	if (n == -1)
	{
		printf("������û�д�����Ϣ\n");
		exit(0);
	}

	for (i = n; i < pCon->usedSize - 1; i++)
	{
		pCon->per[]
	}


}