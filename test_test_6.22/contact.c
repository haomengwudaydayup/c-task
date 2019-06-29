#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

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
}


/*实现个人信息添加*/
void AddContact(Contact *pCon)
{
	/*判断满的情况，扩容*/
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
			if (input == 2)
			{
				printf("已取消本次操作！\n");
				return;
			}
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

	for (i = 0; i < pCon->usedSize; i++)
	{
		if (i == 0)
		{
			printf("姓名\t性别\t年龄\t电话\t\t地址\n");
		}
		printf("%s\t", pCon->per[i].name);
		printf("%s\t", pCon->per[i].sex);
		printf("%d\t", pCon->per[i].age);
		printf("%s\t", pCon->per[i].tele);
		printf("%s\n", pCon->per[i].addr);
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
	int input = 0;
	printf("1、姓名，2、性别，3、年龄，4、电话号码，5、地址，6、全部打印，0、退出\n");
	do
	{
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("姓名：%s\n", pCon->per[n].name);
			break;
		case 2:
			printf("性别：%s\n", pCon->per[n].sex);
			break;
		case 3:
			printf("年龄：%d\n", pCon->per[n].age);
			break;
		case 4:
			printf("电话号码：%s\n", pCon->per[n].tele);
			break;
		case 5:
			printf("地址：%s\n", pCon->per[n].addr);
			break;
		case 6:
			printf("姓名：%s\t性别：%s\t年龄：%d\t电话号码：%s\t地址：%s\n", pCon->per[n].name, 
				pCon->per[n].sex, pCon->per[n].age, pCon->per[n].tele, pCon->per[n].addr);
			break;
		case 0:
			printf("退出成功！\n");
		default:
			printf("错误选择，请重新输入！\n");
			scanf("%d", &input);
			break;
		}
	} while (input);
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
	//试试冒泡排序
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
	printf("排序成功\n");
}
void Destroy_Contact(Contact *pCon)
{
	free(pCon->per);
	pCon->per = NULL;
	pCon->capticty = 0;
	pCon->usedSize = 0;
}