#include"myproject.h"

extern int n;
 
void Save(void)
{
    FILE *fp;
    if((fp=fopen("studentdata.txt","wb"))==NULL)//ֻд�򿪻��½�һ���������ļ�,ֻ����д����
    {
    	printf("\n�����޷����ļ���\n");
    	exit(0);
	}	  
    p=head;  
    while(p!=NULL)
	{  
		if(fwrite(p,sizeof(struct student),1,fp)!=1)//������д���ļ� 
		{
			printf("\nд�����ݳ���\n");  
			fclose(fp);
			break;
        }  
        p=p->next;  
    }  
    fclose(fp);//�ļ��ر�  
	printf("\n��洢��ɡ�\n");
	system("pause");
	system("cls");
}
void Read(void)
{
	FILE *fp;
	if((fp=fopen("studentdata.txt","rb+"))==NULL)//��д��һ���������ļ������������ 
	{
		printf("\n�����޷����ļ�!\n");
		exit(0);
	}
    do
	{ 
		p1=malloc(sizeof(struct student));
		if(n==0)//�ж�����ͷ                                     
		{
			head=p1;	
		}                                     
		else
		{
			p2->next=p1; //p2�Ľ�β��ָ��ĵ�ַ��p1			
		}
		fread(p1,sizeof(struct student),1,fp);//���ļ����ݽ��ж�ȡ 
		p2=p1;
		n++;
    }while(p2->next!=NULL);
    fclose(fp);
	printf("\n���ȡ���!��\n");
	system("pause");
	system("cls");
}
