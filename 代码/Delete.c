#include"myproject.h"

extern int n;
 
void Delete(void)
{
	if(n!=0)
	{                
		char a[LEN];
		int flag=0;//flagΪ��־�����������ж�����ѧ�ź��Ƿ����������� 
		printf("������Ҫɾ����ѧ�ţ�");
		scanf("%s",&a);
		p=head;
		
		if(strcmp(head->StudentId,a)==0)
		{
			q1=head;
			head=head->next;
			free(q1);//�ͷŸ��ڴ��ַ 
			flag=1;
		}
		else
		{
			p=head;
			do
			{
				if(strcmp(p->StudentId,a)==0)
				{
					q1=p;
					q2->next=p->next;
					free(q1);
					flag=1;
					break;
				}
				q2=p; //q2��ʱָ��p��֮��p��ָ����һ���ڵ㣬��������Ҫɾ���Ľڵ���ôq2ָ������ڵ��next�ĵ�ַ                          
				p=p->next;
			}while(p!=NULL);
		}
		
		if(flag==0)//������ѧ�Ž����ж� 
		{
			printf("\n��ѧ���������󣬷������˵�����\n");
		}
		else
		{
			printf("\n�������Ѿ���ɾ������\n");
			n--;
		} 
	}
	else
	{
		printf("\n�����������û�����������!��\n");
	}
				  
	system("pause");
	system("cls");
}
