#ifndef __LIST_H__
#define __LIST_H__
//#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node, *pList;

//初始化
void InitList(pList plsit);

//头插
void InsertHead(pList plist, int val);//55

//尾插
void InsertTail(pList plist, int val);//55

//打印
void Show(pList plist);

//任意位置插入
void Insert_any(pList plist, int position, int value);

//删除
void Delete_any(pList plist, int position);

//查找
void Seek_value(pList plist, int value);

//释放
void Free_memory(pList);

Node *LastKNode(pList plist, int k);

#endif //__LIST_H__


