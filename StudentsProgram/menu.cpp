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
	printf("\n.-------------<操作菜单>-----------.\n");
	printf("|                                  |\n");
	printf("|       1.初始化                   |\n");
	printf("|       2.查看学生信息             |\n");
	printf("|       3.添加学生信息             |\n");
	printf("|       4.删除学生信息             |\n");
	printf("|       5.查询学生信息             |\n");
	printf("|       6.修改学生信息             |\n");
	printf("|       7.学生信息排序             |\n");
	printf("|       0.结束并关闭程序           |\n");
	printf("|                                  |\n");
	printf(".----------------------------------.\n\n");
	printf("●请输入您想进行操作前的编号：");
	scanf("%d",&no);
	switch(no)
	{
	case 1:printf("\n■您选择的操作是：初始化\n");init();break;
	case 2:printf("\n■您选择的操作是：查看学生信息\n");print();break;
	case 3:printf("\n■您选择的操作是：添加学生信息\n");add();break;
	case 4:printf("\n■您选择的操作是：删除学生信息\n");del();break;
	case 5:printf("\n■您选择的操作是：查询学生信息\n");search_menu();break;
	case 6:printf("\n■您选择的操作是：修改学生信息\n");mod_menu();break;
	case 7:printf("\n■您选择的操作是：学生信息排序\n");sort_menu();break;
	case 0:printf("\n<按任意键确认退出程序...>\n");break;
	default:printf("\a\a●Error,输入无效\n");break;
	}
	if(no==0)
		break;
	}
}