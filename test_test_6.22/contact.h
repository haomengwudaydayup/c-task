#pragma once

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_ADDR 100
#define MAX_SEX 5

#define MAX_NUMPERSIN 1000

/*������Ϣ��*/
typedef struct Personinfo
{
	char name[MAX_NAME];				//����
	int age;										//����
	char tele[MAX_TELE];					//�绰
	char addr[MAX_ADDR];				//��ַ
	char sex[MAX_SEX];						//�Ա�

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
int SearchContact(Contact*, char *);
/*ɾ��Ԫ��*/
void DelContact(Contact*);
/*���Ԫ��*/
void ShowContact(Contact *);
/*���*/
void Clearcontact(Contact*);
/*ѡ���ӡ������Ϣ*/
void Per_PrintContact(Contact *);
/*�޸ĸ�����Ϣ*/
void Modify_Perinfo(Contact *);
/*����*/
void Sort_Contact(Contact *);