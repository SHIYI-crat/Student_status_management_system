#include"myproject.h"

extern int n;

void Add(void)
{ 
	p1=(struct student *)malloc(sizeof(struct student));//��̬�ڴ���� 
	int m;
	
	printf("***��������:2020160101  lihua  20  M  xinxixueyuan  jisuanji  jike2001  1001011***\n"); 
	printf("***********************�� �� Ҫ �� �� �� �� ѧ �� Ŷ ��***************************\n"); 
	 
	if(n==0)
	{
		head=p1;
		printf("ѧ��ѧ�ţ�");
		scanf("%s",&p1->StudentId);		
	}                               
	else 
	{
		p2->next=p1;
loop:	printf("ѧ��ѧ�ţ�");
		scanf("%s",&p1->StudentId);
		q=head;
		m = n;
		while(m--)//m����ѭ������ 
		{	                                      	
			if(strcmp(p1->StudentId,q->StudentId)==0)
			{
				printf("\n�������ѧ���ظ������������룡\n");
				goto loop; 
			}
			q=q->next;                 
		}
	}
				                         
	printf("ѧ��������");
	scanf("%s",&p1->StudentName);
	printf("ѧ�����䣺");
	scanf("%s",&p1->StudentAge);
	printf("ѧ���Ա�");
	scanf("%s",&p1->StudentSex);
	printf("ѧ��ѧԺ��");
	scanf("%s",&p1->StudentCollege);
	printf("ѧ��רҵ��");
	scanf("%s",&p1->StudentMajor);
	printf("ѧ���༶��");
	scanf("%s",&p1->StudentClass);
	printf("ѧ���绰��");
	scanf("%s",&p1->StudentTelephoneNumber);

	p2=p1;                   //p2ָ��p1���ڵĵ�ַ
	p2->next=NULL;           //���������־
	n++;                     //n���ڼ�¼���������� 
	system("pause");         //ϵͳ��ͣ���� 
	system("cls");           //ϵͳ�������� 
}
