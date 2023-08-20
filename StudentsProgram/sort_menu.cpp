#include<stdio.h>
#include<stdlib.h>
void menu();
void sort_sum();
void sort_num();
void sort_menu()
{
	int no;
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
	printf("\n.-------------<排序方式>-----------.\n");
	printf("|                                  |\n");
	printf("|           1.按总分排名           |\n");
	printf("|           2.按学号排名           |\n");
	printf("|           0.返回                 |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("●请输入您想进行操作前的编号：");
	scanf("%d",&no);
	switch(no)
	{
		case 1:printf("\n■您选择的操作是：按总分排名\n");sort_sum();break;
		case 2:printf("\n■您选择的操作是：按学号排名\n");sort_num();break;
		case 0:menu();break;
		default:printf("\a\a●Error,输入无效\n");break;
	}
}