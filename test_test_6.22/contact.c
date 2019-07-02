#include"contact.h"

void LoadContact(Contact *pCon)
{
	//���غ���
	int i = 0;
	Personinfo tmp = { 0 };
	FILE *fp = fopen("contact_number", "rb");
	assert(fp != NULL);

	while (fread(&tmp, sizeof(Personinfo), 1, fp))
	{
			pCon->per[pCon->usedSize] = tmp;
			pCon->usedSize++;			//��ȡ�ɹ����൱��ÿ��usedSize��һ��
	} 
	fclose(fp);
	fp = NULL;
}

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
	
	/*Ŀ����ÿ�γ�ʼ����ʱ����Զ���ȡ����*/
	LoadContact(pCon);
}

/*���ݺ���*/
int Broad_memory(Contact *pCon)
{
	if (pCon->per == pCon->usedSize)
	{
		Personinfo *p = (Personinfo *)realloc(pCon->per, pCon->capticty + INCREAMENT);
		if (p != NULL)			//�����ڴ�ɹ������
		{
			pCon->per = p;
			pCon->capticty += INCREAMENT;
			p = NULL;
			printf("���ݳɹ���\n");
			return 1;
		}
	}

	return 0;
}

/*ʵ�ָ�����Ϣ���*/
void AddContact(Contact *pCon)
{
	Broad_memory(pCon);

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
			scanf("%*[^\n]"); scanf("%*c");
			if (input == 2)
			{
				printf("��ȡ�����β�����\n");
				return;
			}
			break;
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

	printf("%-12s%-9s%-9s%-17s%-8s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pCon->usedSize; i++)
	{
		printf("%-12s%-9d%-9s%-17s%-8s\n", pCon->per[i].name, pCon->per[i].age,
			pCon->per[i].sex, pCon->per[i].tele, pCon->per[i].addr);
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
	printf("������%s\t�Ա�%s\t���䣺%d\t�绰���룺%s\t��ַ��%s\n", pCon->per[n].name,
		pCon->per[n].sex, pCon->per[n].age, pCon->per[n].tele, pCon->per[n].addr);
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
	//ð������
	int i = 0, j = 0;
	for (i = 0; i < pCon->usedSize - 1; i++)
	{
		for (j = 0; j < pCon->usedSize - 1 - i; j++)
		{
			int flag = 0;			//ð�������Ż�
			if ((strcmp(pCon->per[j].name,pCon->per[j + 1].name)) > 0)
			{
				Personinfo tmp = pCon->per[j];
				pCon->per[j] = pCon->per[j + 1];
				pCon->per[j + 1] = tmp;
				flag = 1;
			}
			if (flag == 0)
			{
				break;
			}
		}
	}
	printf("����ɹ�\n");
}

void keepContact(Contact *pCon)
{
	int i = 0;
	FILE *fp = fopen("contact_number", "wb");
	assert(fp != NULL);
	for (i = 0; i < pCon->usedSize; i++)
	{
		fwrite(&(pCon->per[i]), sizeof(Personinfo), 1, fp);
	}
	printf("�浵�ɹ���\n");
	fclose(fp);
	fp = NULL;
}

void Destroy_Contact(Contact *pCon)
{
	/*�洢����*/
	keepContact(pCon);

	free(pCon->per);
	pCon->per = NULL;
	pCon->capticty = 0;
	pCon->usedSize = 0;
}