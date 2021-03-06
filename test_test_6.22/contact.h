#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<vld.h>
#include<assert.h>

#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_ADDR 100
#define MAX_SEX 5

#define MAX_NUMPERSIN 1000
#define INCREAMENT 10

/*个人信息表*/
typedef struct Personinfo
{
	char name[MAX_NAME];				//姓名
	int age;										//年龄
	char tele[MAX_TELE];					//电话
	char addr[MAX_ADDR];				//地址
	char sex[MAX_SEX];						//性别

}Personinfo;

/*通讯录*/
typedef struct Contact
{
	Personinfo *per;		//存储每个人的数组
	int usedSize;			//被使用的个数
	int capticty;				//容量
}Contact;

/*初始化个人信息*/
void InitContact(Contact*);				//声明
/*添加个人信息*/
void AddContact(Contact*);
/*查找个人信息*/
int SearchContact(Contact*, char *);
/*删除元素*/
void DelContact(Contact*);
/*添加元素*/
void ShowContact(Contact *);
/*清空*/
void Clearcontact(Contact*);
/*选择打印个人信息*/
void Per_PrintContact(Contact *);
/*修改个人信息*/
void Modify_Perinfo(Contact *);
/*排序*/
void Sort_Contact(Contact *);
/*摧毁*/
void Destroy_Contact(Contact *);