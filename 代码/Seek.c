#include"myproject.h"

extern int n;

void Seek(void)
{
	int b,flag=0;//flagΪ��־�����������ж�����ѧ�ź��Ƿ�����������
	char a[LEN];
	
	if(n!=0)
	{
		printf("\n1.��ѧ�Ų���:\n");
		printf("2.��ѧԺ����:\n");
		printf("3.��רҵ����:\n");
		printf("4.���༶����:\n");
		printf("������1-4��ѡ��:");
		scanf("%d",&b);
		if(b>=1 && b<=4)
		{
			printf("������Ҫ���ҵ����ƣ�");
			scanf("%s",&a);
			p=head;//ָ��ָ��ͷ
			switch(b)
			{
				case 1://��ѧ�Ų��� 
					do
					{	                                      
						if(strcmp(a,p->StudentId)==0)
						{
							printf("\n��Ϣ�ѱ��ҵ���\nѧ��\t\t����\t\t����\t�Ա�\tѧԺ\t\tרҵ\t\t�༶\t\t�绰\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;//ָ��ָ����һ���ڵ�                            
					}while(p!=NULL);
					break;
				case 2://��ѧԺ���� 
					do
					{	                                      
						if(strcmp(a,p->StudentCollege)==0)
						{
							printf("\nѧ��\t\t����\t\t����\t�Ա�\tѧԺ\t\tרҵ\t\t�༶\t\t�绰\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;                          
					}while(p!=NULL);
					break;
				case 3://��רҵ���� 
					do
					{	                                      
						if(strcmp(a,p->StudentMajor)==0)
						{
							printf("\nѧ��\t\t����\t\t����\t�Ա�\tѧԺ\t\tרҵ\t\t�༶\t\t�绰\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;                          
					}while(p!=NULL);
					break;
				case 4://���༶���� 
					do
					{	                                      
						if(strcmp(a,p->StudentClass)==0)
						{
							printf("\nѧ��\t\t����\t\t����\t�Ա�\tѧԺ\t\tרҵ\t\t�༶\t\t�绰\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;                            
					}while(p!=NULL);
					break;
			 } 
			system("pause");
			if(flag==0)//a��ֵ������� 
			{
				printf("\n���������󣬷������˵�����\n");
				system("pause");
			}
		}
		else//b��ֵ������� 
		{
			printf("���������,�������˵�!��\n");
        	system("pause");
		}		
	}
    else//δ������� 
    {
		printf("\n�����������û�����������!��\n");
		system("pause");
    }
} 
