#include<stdio.h>
#include<stdlib.h>
void menu();
void sort_sum();
void sort_num();
void sort_menu()
{
	int no;
	printf("\n<��Enter�Լ���...>\n");
	getchar();getchar();
	system("cls");
	printf("\n.-------------<����ʽ>-----------.\n");
	printf("|                                  |\n");
	printf("|           1.���ܷ�����           |\n");
	printf("|           2.��ѧ������           |\n");
	printf("|           0.����                 |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("��������������в���ǰ�ı�ţ�");
	scanf("%d",&no);
	switch(no)
	{
		case 1:printf("\n����ѡ��Ĳ����ǣ����ܷ�����\n");sort_sum();break;
		case 2:printf("\n����ѡ��Ĳ����ǣ���ѧ������\n");sort_num();break;
		case 0:menu();break;
		default:printf("\a\a��Error,������Ч\n");break;
	}
}