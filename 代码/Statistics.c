#include"myproject.h" 

extern int n;

void Statistics(void)
{
	int c,d=0;
	char a[LEN];
	printf("\n��ǰ�Ѵ洢%d��ѧ����ѧ����Ϣ��\n",n);
	printf("����������ͳ�Ƶ�����:\n");
	printf("1��ͳ��ѧԺ����\n");
	printf("2��ͳ��רҵ����\n");
	printf("3��ͳ�ư༶����\n");
	scanf("%d",&c);
	
	if(c>=1&&c<=3) 
	{
		printf("������Ҫͳ�Ƶ����ƣ�");
		scanf("%s",a);
		p=head;	
		switch(c)
		{
			case 1://ͳ��ѧԺ���� 
				do
				{	                                      
					if(strcmp(a,p->StudentCollege)==0)
					{
						d++;
					}
					p=p->next;                           
				}while(p!=NULL);
				break;
			case 2://ͳ��רҵ���� 
				do
				{	                                      
					if(strcmp(a,p->StudentMajor)==0)
					{
						d++;
					}
					p=p->next;                          
				}while(p!=NULL);
				break;
			case 3://ͳ�ư༶���� 
				do
				{	                                      
					if(strcmp(a,p->StudentClass)==0)
					{
						d++;
					}
					p=p->next;                            
				}while(p!=NULL);
				break; 
		}
		printf("ͳ�Ƶõ�����Ϊ%d��\n",d);
		system("pause");		
	}
    else
    {
        printf("���������,�������˵�!!��\n");
        system("pause");
    }
}
