#include"myproject.h"

extern int n; 

void Browse(void)
{
	if(n!=0)
	{
		p=head;//p��ָ��ͷ
		printf("ѧ��\t\t����\t\t����\t�Ա�\tѧԺ\t\tרҵ\t\t�༶\t\t�绰\n");//\tΪˮƽ�Ʊ�����൱��8���ո� 
		do
		{
			printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
			p=p->next;//p��ӡ���� ��pָ��next���ж���һ��������û������
		}while(p!=NULL);//ֻҪpָ����ڴ����������ݣ��ʹ�ӡ����
	}
	else
	{
		printf("\n�ﻹû�����������!��\n");		
	}
	system("pause");
	system("cls");
}
