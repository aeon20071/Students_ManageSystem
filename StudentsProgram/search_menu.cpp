#include<stdio.h>
#include<stdlib.h>
void menu();
void qname();
void qno();
void search_menu()
{
	int no;
	printf("\n<��Enter�Լ���...>\n");
	getchar();getchar();
	system("cls");
	printf("\n.-------------<��ѯ��ʽ>-----------.\n");
	printf("|                                  |\n");
	printf("|           1.��������ѯ           |\n");
	printf("|           2.��ѧ�Ų�ѯ           |\n");
	printf("|           0.����                 |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("��������������в���ǰ�ı�ţ�");
	scanf("%d",&no);
	switch(no)
	{
		case 1:printf("\n����ѡ��Ĳ����ǣ���������ѯ\n");qname();break;
		case 2:printf("\n����ѡ��Ĳ����ǣ���ѧ�Ų�ѯ\n");qno();break;
		case 0:menu();break;
		default:printf("\a\a��Error,������Ч\n");break;
	}
}