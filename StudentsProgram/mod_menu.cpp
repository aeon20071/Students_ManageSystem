#include<stdio.h>
#include<stdlib.h>
void menu();
void mod_num();
void mod_name();
void mod_menu()
{
	int no;
	printf("\n<��Enter�Լ���...>\n");
	getchar();getchar();
	system("cls");
	printf("\n.-------------<�޸�����>-----------.\n");
	printf("|                                  |\n");
	printf("|           1.�޸�ѧ��ѧ��         |\n");
	printf("|           2.�޸�ѧ������         |\n");
	printf("|           0.����                 |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("��������������в���ǰ�ı�ţ�");
	scanf("%d",&no);
	switch(no)
	{
		case 1:printf("\n����ѡ��Ĳ����ǣ��޸�ѧ��ѧ��\n");mod_num();break;
		case 2:printf("\n����ѡ��Ĳ����ǣ��޸�ѧ������\n");mod_name();break;
		case 0:menu();break;
		default:printf("\a\a��Error,������Ч\n");break;
	}
}