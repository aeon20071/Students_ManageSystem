#include<stdio.h>
#include<string.h>
#include<stdlib.h>
extern void welcome();
extern void menu();
struct student
{
	int num;
	char name[10];
	float score[3];
	float total;
}stu[50]={{2019220499,"c",{88,87,76},251},{2019220402,"b",{89,88,75},252},{2019220404,"d",{88,87,75},250}};
int len=3;
int main()
{
	int num=2;
	welcome();
	int land();
    if (land() == 0)
    {
        printf("\a●管理员密码正确，登录成功\n");
		printf("●您好！您是第%d名访问者\n\n",num);
		printf("<按Enter以进入操作菜单...>\n");
		getchar();
		getchar();
		system("cls");
		menu();
    }
    else if (land() == -1)
    {
        printf("\a\a●输入次数已经用尽，系统将自动退出！\n");
    }
	return 0;
}