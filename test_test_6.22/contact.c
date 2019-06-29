#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact *pCon)			//��ʼ��ʵ��
{
	int i = 0;
	pCon->per = (Personinfo*)malloc(sizeof(Personinfo)*MAX_NUMPERSIN);
	if (pCon->per == NULL)
	{
		return;
	}
	pCon->usedSize = MAX_NUMPERSIN;
	pCon->usedSize = 0;					//ʹ�ø�����ʼ��Ϊ0

	/*��ʼ��������Ϣ*/
	memset(pCon->per, 0, sizeof(Personinfo)*MAX_NUMPERSIN);
}


/*ʵ�ָ�����Ϣ���*/
void AddContact(Contact *pCon)
{
	/*�ж��������������*/
	if (pCon->usedSize == pCon->capticty)
	{
		Personinfo *p = (Personinfo *)realloc(pCon->per, pCon->capticty + INCREAMENT);
		if (p != NULL)
		{
			pCon->per = p;
			p = NULL;
			pCon->capticty = MAX_NUMPERSIN + INCREAMENT;
		}
	}

	int i = 0;
	char *name[20] = { 0 };
	if (pCon->usedSize == MAX_NUMPERSIN)
	{
		printf("ͨѶ¼�洢����\n");
		exit(0);
	}

	printf("����������:>");
	//scanf("%s", pCon->per[pCon->usedSize].name);
	scanf("%s", name);
	scanf("%*[^\n]"); scanf("%*c");

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp((pCon->per[i].name), name) == 0)
		{
			int input = 0;
			printf("�Ѵ��ڸ��û���ȷ��Ҫ�����\n");
			printf("1��ȷ����2��ȡ�����β���\n");
			scanf("%d", &input);
			if (input == 2)
			{
				printf("��ȡ�����β�����\n");
				return;
			}
		}
	}
	strcpy(pCon->per[pCon->usedSize].name, name);

	printf("����������:>");
	scanf("%d", &(pCon->per[pCon->usedSize].age));
	scanf("%*[^\n]"); scanf("%*c");
	printf("�������Ա�:>");
	scanf("%s", pCon->per[pCon->usedSize].sex);
	scanf("%*[^\n]"); scanf("%*c");
	printf("������绰:>");
	scanf("%s", pCon->per[pCon->usedSize].tele);
	scanf("%*[^\n]"); scanf("%*c");
	printf("�������ַ:>");
	scanf("%s", pCon->per[pCon->usedSize].addr);
	scanf("%*[^\n]"); scanf("%*c");

	pCon->usedSize++;
	printf("��ӳɹ���\n");
}

/*�����������Ҹ�����Ϣ*/
int SearchContact(Contact *pCon, char *Searname)
{
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
			return i;
		}
	}
	return -1;
}

/*ɾ��Ԫ��*/
void DelContact(Contact *pCon)
{
	char Delname[20] = { 0 };
	int n = 0;
	int i = 0;
	printf("����������ɾ��������\n");
	scanf("%s", Delname);
	n = SearchContact(pCon, Delname);			//�ҵ�Ҫɾ����λ��
	if (n == -1)
	{
		printf("�����ڸ�������Ϣ!\n");
		return;
	}
	for (i = n+ 1; i < pCon->usedSize ; i++)
	{
		pCon->per[i-1] = pCon->per[i];
	}
	pCon->usedSize--;
}

void ShowContact(Contact *pCon)
{
	int i = 0;

	if (pCon->usedSize == 0)
	{
		printf("Ŀǰû�д洢��Ϣ�����ȴ洢��Ϣ��\n");
		return;
	}

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (i == 0)
		{
			printf("����\t�Ա�\t����\t�绰\t\t��ַ\n");
		}
		printf("%s\t", pCon->per[i].name);
		printf("%s\t", pCon->per[i].sex);
		printf("%d\t", pCon->per[i].age);
		printf("%s\t", pCon->per[i].tele);
		printf("%s\n", pCon->per[i].addr);
	}
}
/*�����Ϣ*/
void Clearcontact(Contact *pCon)
{
	pCon->usedSize = 0;
}
/*��ӡ������Ϣ*/
void Per_PrintContact(Contact *pCon, int n)
{
	int input = 0;
	printf("1��������2���Ա�3�����䣬4���绰���룬5����ַ��6��ȫ����ӡ��0���˳�\n");
	do
	{
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������%s\n", pCon->per[n].name);
			break;
		case 2:
			printf("�Ա�%s\n", pCon->per[n].sex);
			break;
		case 3:
			printf("���䣺%d\n", pCon->per[n].age);
			break;
		case 4:
			printf("�绰���룺%s\n", pCon->per[n].tele);
			break;
		case 5:
			printf("��ַ��%s\n", pCon->per[n].addr);
			break;
		case 6:
			printf("������%s\t�Ա�%s\t���䣺%d\t�绰���룺%s\t��ַ��%s\n", pCon->per[n].name, 
				pCon->per[n].sex, pCon->per[n].age, pCon->per[n].tele, pCon->per[n].addr);
			break;
		case 0:
			printf("�˳��ɹ���\n");
		default:
			printf("����ѡ�����������룡\n");
			scanf("%d", &input);
			break;
		}
	} while (input);
}
/*�޸ĸ�����Ϣ*/
void Modify_Perinfo(Contact *pCon)
{
	int i = 0;
	char name[20] = { 0 };
	printf("�����������޸�����\n");
	scanf("%s", name);

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp((pCon->per[i].name), name) == 0)
		{
			printf("�������µ�����:>");
			scanf("%s", pCon->per[i].name);
			printf("����������:>");
			scanf("%d", &(pCon->per[i].age));
			scanf("%*[^\n]"); scanf("%*c");
			printf("�������Ա�:>");
			scanf("%s", pCon->per[i].sex);
			scanf("%*[^\n]"); scanf("%*c");
			printf("������绰:>");
			scanf("%s", pCon->per[i].tele);
			scanf("%*[^\n]"); scanf("%*c");
			printf("�������ַ:>");
			scanf("%s", pCon->per[i].addr);
			scanf("%*[^\n]"); scanf("%*c");
			break;
		}
	}

	if (i == pCon->usedSize)
	{
		printf("������û����Ҫ�޸ĵ���Ϣ\n");
	}
}
/*���򣨸���������*/
void Sort_Contact(Contact *pCon)
{
	//����ð������
	int i = 0, j = 0;
	for (i = 0; i < pCon->usedSize - 1; i++)
	{
		for (j = 0; j < pCon->usedSize - 1 - i; j++)
		{
			if (strcmp(pCon->per[j].name,pCon->per[j + 1].name) > 0)
			{
				char str[20] = { 0 };
				int tmp = 0;
				strcpy(str, pCon->per[j].name);
				strcpy(pCon->per[j].name, pCon->per[j + 1].name);
				strcpy(pCon->per[j + 1].name, str);

				tmp = pCon->per[j].age;
				pCon->per[j].age = pCon->per[j + 1].age;
				pCon->per[j + 1].age = tmp;

				strcpy(str, pCon->per[j].tele);
				strcpy(pCon->per[j].tele, pCon->per[j + 1].tele);
				strcpy(pCon->per[j + 1].tele, str);

				strcpy(str, pCon->per[j].addr);
				strcpy(pCon->per[j].addr, pCon->per[j + 1].addr);
				strcpy(pCon->per[j + 1].addr, str);

				strcpy(str, pCon->per[j].sex);
				strcpy(pCon->per[j].sex, pCon->per[j + 1].sex);
				strcpy(pCon->per[j + 1].sex, str);
			}
		}
	}
	printf("����ɹ�\n");
}
void Destroy_Contact(Contact *pCon)
{
	free(pCon->per);
	pCon->per = NULL;
	pCon->capticty = 0;
	pCon->usedSize = 0;
}