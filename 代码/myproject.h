#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#define LEN 16//����ַ������ɸ���ʵ���޸� 

struct student 
{
	char StudentId[LEN];                //ѧ��ѧ�� 
	char StudentName[LEN];              //ѧ������ 
	char StudentAge[LEN];               //ѧ������ 
	char StudentSex[LEN];               //ѧ���Ա� 
	char StudentCollege[LEN];           //ѧ��ѧԺ 
	char StudentMajor[LEN];             //ѧ��רҵ 
	char StudentClass[LEN];             //ѧ���༶ 
	char StudentTelephoneNumber[LEN];   //ѧ���绰 
	struct student *next;
}*head,*p,*q,*p1,*p2,*q1,*q2;//head��ʾ��ͷ��*p,*q,*p1,*p2,*q1,*q2���ں������õ��Ľṹ��ָ�� 

void Add(void);              //������ 
void Delete(void);           //ɾ������ 
void Seek(void);             //���Һ��� 
void Modify(void);           //�޸ĺ��� 
void Browse(void);           //������� 
void Statistics(void);       //ͳ�ƺ��� 
void Save(void);             //���溯�� 
void Read(void);             //��ȡ���� 

