#include"myproject.h"

extern int n; 

void Modify(void)
{
	if(n!=0)
	{
		int b,flag=0;//flagΪ��־�����������ж�����ѧ�ź��Ƿ����������� 
		char a[LEN];
		printf("������Ҫ�޸ĵ�ѧ�ţ�");
		scanf("%s",&a);
		p=head;
		do
		{
			if(strcmp(a,p->StudentId)==0)
			{
				printf("\n���޸�����Ϣ���£�\nѧ��\t\t����\t\t����\t�Ա�\tѧԺ\t\tרҵ\t\t�༶\t\t�绰\n");
				printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
				flag=1;
				break;
			}
			p=p->next;                        
		}while(p!=NULL);
		
		if(flag==0)
		{
				printf("\n��ѧ���������󣬷������˵�����\n");
		}
		else
		{
			printf("\n\n1.�޸�ѧ��\n2.�޸�����\n3.�޸�����\n4.�޸��Ա�\n5.�޸�ѧԺ\n6.�޸�רҵ\n7.�޸İ༶\n8.�޸ĵ绰\n9.�˳��޸�\n\n");
		
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("ѧ���޸�Ϊ��");
					scanf("%s",&p->StudentId);break;
				case 2:
					printf("�����޸�Ϊ��");
					scanf("%s",&p->StudentName);break;
				case 3:
					printf("�����޸�Ϊ��");
					scanf("%s",&p->StudentAge);break;
				case 4:
					printf("�Ա��޸�Ϊ��");
					scanf("%s",&p->StudentSex);break;
				case 5:
					printf("ѧԺ�޸�Ϊ��");
					scanf("%s",&p->StudentCollege);break;
				case 6:
					printf("רҵ�޸�Ϊ��");
					scanf("%s",&p->StudentMajor);break;
				case 7:
					printf("�༶�޸�Ϊ��");
					scanf("%s",&p->StudentClass);break;
				case 8:
					printf("�绰�޸�Ϊ��");
					scanf("%s",&p->StudentTelephoneNumber);break;
				case 9:
					break;
				}
			printf("\n\n������ɹ�!��\n\n");
		}
	}			
	else
	{
		printf("\n�����������û�����������!��\n");
	}
			
	system("pause");
	system("cls");
}
