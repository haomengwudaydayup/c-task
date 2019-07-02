#include"contact.h"

void LoadContact(Contact *pCon)
{
	//加载函数
	int i = 0;
	Personinfo tmp = { 0 };
	FILE *fp = fopen("contact_number", "rb");
	assert(fp != NULL);

	while (fread(&tmp, sizeof(Personinfo), 1, fp))
	{
			pCon->per[pCon->usedSize] = tmp;
			pCon->usedSize++;			//读取成功，相当于每次usedSize加一次
	} 
	fclose(fp);
	fp = NULL;
}

void InitContact(Contact *pCon)			//初始化实现
{
	int i = 0;
	pCon->per = (Personinfo*)malloc(sizeof(Personinfo)*MAX_NUMPERSIN);
	if (pCon->per == NULL)
	{
		return;
	}
	pCon->usedSize = MAX_NUMPERSIN;
	pCon->usedSize = 0;					//使用个数初始化为0

	/*初始化个人信息*/
	memset(pCon->per, 0, sizeof(Personinfo)*MAX_NUMPERSIN);
	
	/*目的是每次初始化的时候会自动读取数据*/
	LoadContact(pCon);
}

/*扩容函数*/
int Broad_memory(Contact *pCon)
{
	if (pCon->per == pCon->usedSize)
	{
		Personinfo *p = (Personinfo *)realloc(pCon->per, pCon->capticty + INCREAMENT);
		if (p != NULL)			//分配内存成功的情况
		{
			pCon->per = p;
			pCon->capticty += INCREAMENT;
			p = NULL;
			printf("扩容成功！\n");
			return 1;
		}
	}

	return 0;
}

/*实现个人信息添加*/
void AddContact(Contact *pCon)
{
	Broad_memory(pCon);

	int i = 0;
	char *name[20] = { 0 };
	if (pCon->usedSize == MAX_NUMPERSIN)
	{
		printf("通讯录存储饱和\n");
		exit(0);
	}

	printf("请输入姓名:>");
	//scanf("%s", pCon->per[pCon->usedSize].name);
	scanf("%s", name);
	scanf("%*[^\n]"); scanf("%*c");

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp((pCon->per[i].name), name) == 0)
		{
			int input = 0;
			printf("已存在该用户，确定要存放吗\n");
			printf("1、确定，2、取消本次操作\n");
			scanf("%d", &input);
			scanf("%*[^\n]"); scanf("%*c");
			if (input == 2)
			{
				printf("已取消本次操作！\n");
				return;
			}
			break;
		}
	}
	strcpy(pCon->per[pCon->usedSize].name, name);

	printf("请输入年龄:>");
	scanf("%d", &(pCon->per[pCon->usedSize].age));
	scanf("%*[^\n]"); scanf("%*c");
	printf("请输入性别:>");
	scanf("%s", pCon->per[pCon->usedSize].sex);
	scanf("%*[^\n]"); scanf("%*c");
	printf("请输入电话:>");
	scanf("%s", pCon->per[pCon->usedSize].tele);
	scanf("%*[^\n]"); scanf("%*c");
	printf("请输入地址:>");
	scanf("%s", pCon->per[pCon->usedSize].addr);
	scanf("%*[^\n]"); scanf("%*c");

	pCon->usedSize++;
	printf("添加成功！\n");
}

/*根据姓名查找个人信息*/
int SearchContact(Contact *pCon, char *Searname)
{
	int i = 0;
	if (pCon->usedSize == 0)
	{
		printf("通讯录为空\n");
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

/*删除元素*/
void DelContact(Contact *pCon)
{
	char Delname[20] = { 0 };
	int n = 0;
	int i = 0;
	printf("请输入您想删除的人名\n");
	scanf("%s", Delname);
	n = SearchContact(pCon, Delname);			//找到要删除的位置
	if (n == -1)
	{
		printf("不存在该人名信息!\n");
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
		printf("目前没有存储信息，请先存储信息！\n");
		return;
	}

	printf("%-12s%-9s%-9s%-17s%-8s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pCon->usedSize; i++)
	{
		printf("%-12s%-9d%-9s%-17s%-8s\n", pCon->per[i].name, pCon->per[i].age,
			pCon->per[i].sex, pCon->per[i].tele, pCon->per[i].addr);
	}
}
/*清空信息*/
void Clearcontact(Contact *pCon)
{
	pCon->usedSize = 0;
}

/*打印个人信息*/
void Per_PrintContact(Contact *pCon, int n)
{
	printf("姓名：%s\t性别：%s\t年龄：%d\t电话号码：%s\t地址：%s\n", pCon->per[n].name,
		pCon->per[n].sex, pCon->per[n].age, pCon->per[n].tele, pCon->per[n].addr);
}
/*修改个人信息*/
void Modify_Perinfo(Contact *pCon)
{
	int i = 0;
	char name[20] = { 0 };
	printf("请输入你想修改人名\n");
	scanf("%s", name);

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp((pCon->per[i].name), name) == 0)
		{
			printf("请输入新的人名:>");
			scanf("%s", pCon->per[i].name);
			printf("请输入年龄:>");
			scanf("%d", &(pCon->per[i].age));
			scanf("%*[^\n]"); scanf("%*c");
			printf("请输入性别:>");
			scanf("%s", pCon->per[i].sex);
			scanf("%*[^\n]"); scanf("%*c");
			printf("请输入电话:>");
			scanf("%s", pCon->per[i].tele);
			scanf("%*[^\n]"); scanf("%*c");
			printf("请输入地址:>");
			scanf("%s", pCon->per[i].addr);
			scanf("%*[^\n]"); scanf("%*c");
			break;
		}
	}

	if (i == pCon->usedSize)
	{
		printf("队列中没有您要修改的信息\n");
	}
}
/*排序（根据姓名）*/
void Sort_Contact(Contact *pCon)
{
	//冒泡排序
	int i = 0, j = 0;
	for (i = 0; i < pCon->usedSize - 1; i++)
	{
		for (j = 0; j < pCon->usedSize - 1 - i; j++)
		{
			int flag = 0;			//冒泡排序优化
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
	printf("排序成功\n");
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
	printf("存档成功！\n");
	fclose(fp);
	fp = NULL;
}

void Destroy_Contact(Contact *pCon)
{
	/*存储函数*/
	keepContact(pCon);

	free(pCon->per);
	pCon->per = NULL;
	pCon->capticty = 0;
	pCon->usedSize = 0;
}