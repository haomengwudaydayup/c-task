
#pragma once

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_TEL 20
#define MAX_TEL 20
#define MAX_SEX 5

#define MAX_NUMPERSIN 1000

/*������Ϣ��*/
typedef struct Personinfo
{
	char name[MAX_NAME];				//����
	short age;							//����
	char tele[MAX_TEL];					//�绰
	char addr[MAX_TEL];					//��ַ
	char sex[MAX_SEX];					//�Ա�
	
}Personinfo;

/*ͨѶ¼*/
typedef struct Contact
{
	Personinfo per[MAX_NUMPERSIN];		//�洢ÿ���˵�����
	int usedSize;
}Contact;

/*��ʼ��������Ϣ*/
void InitContact(Contact*);				//����
/*��Ӹ�����Ϣ*/
void AddContact(Contact*);	
/*���Ҹ�����Ϣ*/
int SearchContact(Contact*,char*);
/*ɾ��Ԫ��*/
void DelContact(Contact*);