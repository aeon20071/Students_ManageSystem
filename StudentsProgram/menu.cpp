#include<stdio.h>
void init();
void print();
void add();
void del();
void search_menu();
void mod_menu();
void sort_menu();
void menu()
{
	int no;
	while(1)
	{
	printf("\n.-------------<�����˵�>-----------.\n");
	printf("|                                  |\n");
	printf("|       1.��ʼ��                   |\n");
	printf("|       2.�鿴ѧ����Ϣ             |\n");
	printf("|       3.���ѧ����Ϣ             |\n");
	printf("|       4.ɾ��ѧ����Ϣ             |\n");
	printf("|       5.��ѯѧ����Ϣ             |\n");
	printf("|       6.�޸�ѧ����Ϣ             |\n");
	printf("|       7.ѧ����Ϣ����             |\n");
	printf("|       0.�������رճ���           |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("��������������в���ǰ�ı�ţ�");
	scanf("%d",&no);
	switch(no)
	{
	case 1:printf("\n����ѡ��Ĳ����ǣ���ʼ��\n");init();break;
	case 2:printf("\n����ѡ��Ĳ����ǣ��鿴ѧ����Ϣ\n");print();break;
	case 3:printf("\n����ѡ��Ĳ����ǣ����ѧ����Ϣ\n");add();break;
	case 4:printf("\n����ѡ��Ĳ����ǣ�ɾ��ѧ����Ϣ\n");del();break;
	case 5:printf("\n����ѡ��Ĳ����ǣ���ѯѧ����Ϣ\n");search_menu();break;
	case 6:printf("\n����ѡ��Ĳ����ǣ��޸�ѧ����Ϣ\n");mod_menu();break;
	case 7:printf("\n����ѡ��Ĳ����ǣ�ѧ����Ϣ����\n");sort_menu();break;
	case 0:printf("\n<�������ȷ���˳�����...>\n");break;
	default:printf("\a\a��Error,������Ч\n");break;
	}
	if(no==0)
		break;
	}
}