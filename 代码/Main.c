#include"myproject.h"

int n = 0;//n������¼ѧ����Ϣ����������

int main(void)
{
	system("color 0F");//����ɫΪ��ɫ��ǰ��ɫΪ����ɫ 
	int a=1;//main������ѭ����ִ��������switch�ı��ʽ 
	char acc[16],pas[16];
	while(a!=0)//a�ж�ѭ����ִ�� 
    {
    	system("cls");
		printf("���������˺�:\n");
	    scanf("%s",acc);
	    printf("������������:\n");
	    scanf("%s",pas);		
	    
	    if((strcmp(acc,"admin")==0)&&(strcmp(pas,"123456")==0))
	    {
	        system("cls");
		    printf("************��ӭʹ��ѧ��ѧ������ϵͳ************\n"); 
		    printf("\n���һ�ν���ϵͳ���ȱ���ѧ����Ϣ��������ĵ�����\n");
			printf("\n��ÿ��ʹ�ø�ϵͳʱ���ȡѧ����Ϣ�Ա�����������\n");
			printf("\n��ÿ���˳���ϵͳʱ�뱣��ѧ����Ϣһ�����ݶ�ʧ����\n");
			printf("\n���밴ϵͳ��ʾ�����ȷ���룬���򽫻���ִ��󣡡�\n");
			printf("\n��ϵͳ���кܶ๦���д����ƣ���ӭ��ϵ�ṩ�������\n\n");
			system("pause");

	        while(a!=0)
			{
				system("cls");
				printf("******************** ѧ �� ѧ �� �� �� ϵ  ͳ ********************\n");
				printf("*                        ��1.����ѧ����Ϣ                        *\n");
				printf("*                        ��2.��ʾѧ����Ϣ                        *\n");
				printf("*                        ��3.����ѧ����Ϣ                        *\n");
				printf("*                        ��4.ɾ��ѧ����Ϣ                        *\n");
				printf("*                        ��5.�޸�ѧ����Ϣ                        *\n");
				printf("*                        ��6.ͳ��ѧ����Ϣ                        *\n");
				printf("*                        ��7.��ȡѧ����Ϣ                        *\n");
				printf("*                        ��8.����ѧ����Ϣ                        *\n");
				printf("*                        ��0.�˳�ѧ��ϵͳ                        *\n");
				printf("******************************************************************\n"); 
				printf("                         ������0-8��ѡ��:");
				
				scanf("%d",&a);
				
				if(a>=0 && a<=8)
				{
					switch(a)//a�����Ӻ����ĵ��� 
					{
					case 1:
						Add();break;
					case 2:
						Browse();break;
					case 3:
						Seek();break;
					case 4:
						Delete();break;
		     		case 5:
		     			Modify();break;
					case 6:
						Statistics();break;
					case 7:
						Read();break;
					case 8:
						Save();break;
					}
				}
				else//a��ֵ������� 
				{
					printf("������������󣬽��������˵�!��\n");
					system("pause");
				}
			}
	    }
	    else//�˺������������ 
	    {
	        printf("���˺Ż���������������ٴγ���!��\n");
	        system("pause");
	    }     
    }	
	return 0;
}
