#define _CRT_SECURE_NO_WARNINGS 1
#include"concate.h"

void InitContact(Contact *Initperson)			//初始化实现
{
	Initperson->usedSize = 0;					//使用个数初始化为0

	int i = 0;

	/*初始化个人信息*/
	for (i = 0; i < MAX_NUMPERSIN; i++)
	{
		memset(Initperson->per, 0, sizeof(Initperson->per));
	}
}


/*实现个人信息添加*/
void AddContact(Contact *pCon)
{
	if (pCon->usedSize == MAX_NUMPERSIN)
	{
		printf("通讯录存储饱和\n");
		exit(0);
	}
	printf("请输入姓名:>");
	scanf("%s", pCon->per[pCon->usedSize].name);
	printf("\n请输入年龄:>");
	scanf("%d", &(pCon->per[pCon->usedSize].age));
	printf("\n请输入性别:>");
	scanf("%s", pCon->per[pCon->usedSize].sex);
	printf("\n请输入电话:>");
	scanf("%s", pCon->per[pCon->usedSize].tele);
	printf("\n请输入地址:>");
	scanf("%s", pCon->per[pCon->usedSize].addr);

	pCon->usedSize++;
}

/*根据姓名查找个人信息*/
int SearchContact(Contact *pCon, char *Searname)
{
	char *Searname = 0;
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
			printf("找到了，他是在第%d号位置\n", i + 1);
			return i;
		}
	}
	return -1;
}

/*删除元素*/
void DelContact(Contact *pCon)
{
	char *Delname = 0;
	int n = 0;
	int i = 0;
	printf("请输入您想删除的人名\n");
	scanf("%s", Delname);
	n = SearchContact(pCon, Delname);
	
	if (n == -1)
	{
		printf("数据中没有此人信息\n");
		exit(0);
	}

	for (i = n; i < pCon->usedSize - 1; i++)
	{
		pCon->per[]
	}


}