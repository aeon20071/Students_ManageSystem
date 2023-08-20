#include<stdio.h>
#include<stdlib.h>
void menu();
void mod_num();
void mod_name();
void mod_menu()
{
	int no;
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
	printf("\n.-------------<修改内容>-----------.\n");
	printf("|                                  |\n");
	printf("|           1.修改学生学号         |\n");
	printf("|           2.修改学生姓名         |\n");
	printf("|           0.返回                 |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("●请输入您想进行操作前的编号：");
	scanf("%d",&no);
	switch(no)
	{
		case 1:printf("\n■您选择的操作是：修改学生学号\n");mod_num();break;
		case 2:printf("\n■您选择的操作是：修改学生姓名\n");mod_name();break;
		case 0:menu();break;
		default:printf("\a\a●Error,输入无效\n");break;
	}
}