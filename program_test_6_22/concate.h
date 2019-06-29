
#pragma once

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_TEL 20
#define MAX_TEL 20
#define MAX_SEX 5

#define MAX_NUMPERSIN 1000

/*个人信息表*/
typedef struct Personinfo
{
	char name[MAX_NAME];				//姓名
	short age;							//年龄
	char tele[MAX_TEL];					//电话
	char addr[MAX_TEL];					//地址
	char sex[MAX_SEX];					//性别
	
}Personinfo;

/*通讯录*/
typedef struct Contact
{
	Personinfo per[MAX_NUMPERSIN];		//存储每个人的数组
	int usedSize;
}Contact;

/*初始化个人信息*/
void InitContact(Contact*);				//声明
/*添加个人信息*/
void AddContact(Contact*);	
/*查找个人信息*/
int SearchContact(Contact*,char*);
/*删除元素*/
void DelContact(Contact*);