#include<stdio.h>
#include<stdlib.h>
void menu();
void qname();
void qno();
void search_menu()
{
	int no;
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
	printf("\n.-------------<查询方式>-----------.\n");
	printf("|                                  |\n");
	printf("|           1.按姓名查询           |\n");
	printf("|           2.按学号查询           |\n");
	printf("|           0.返回                 |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("●请输入您想进行操作前的编号：");
	scanf("%d",&no);
	switch(no)
	{
		case 1:printf("\n■您选择的操作是：按姓名查询\n");qname();break;
		case 2:printf("\n■您选择的操作是：按学号查询\n");qno();break;
		case 0:menu();break;
		default:printf("\a\a●Error,输入无效\n");break;
	}
}