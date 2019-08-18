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

//��ʼ��
void InitList(pList plsit);

//ͷ��
void InsertHead(pList plist, int val);//55

//β��
void InsertTail(pList plist, int val);//55

//��ӡ
void Show(pList plist);

//����λ�ò���
void Insert_any(pList plist, int position, int value);

//ɾ��
void Delete_any(pList plist, int position);

//����
void Seek_value(pList plist, int value);

//�ͷ�
void Free_memory(pList);

Node *LastKNode(pList plist, int k);

#endif //__LIST_H__


