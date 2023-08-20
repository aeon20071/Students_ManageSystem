#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print();
extern struct student
{
	int num;
	char name[10];
	float score[3];
	float total;
}stu[50];
extern int len;
void mod_name()
{
	int i,j;
	char sname[10];
	printf("●请输入要修改学生的姓名：");
	scanf("%s",&sname);
	for(i=0;i<len;i++)
	{
		if(strcmp(sname,stu[i].name)==0)
		{
			printf("学号\t\t姓名\t语文\t数学\t英语\t总成绩\n");
			printf("%d\t%-6s\t",stu[i].num,stu[i].name);
			for(j=0;j<3;j++)
				printf("%.2f\t",stu[i].score[j]);
			printf("%.2f\n",stu[i].total);
			stu[i].total=0;
			printf("●请输入该学生的十位学号：");
			scanf("%d",&stu[i].num);
			printf("●请输入该学生的姓名：");
			scanf("%s",stu[i].name);
			printf("●请输入该学生的三门课成绩（语文、数学、英语）：");
			for(j=0;j<3;j++)
			{
				scanf("%f",&stu[i].score[j]);
				stu[i].total+=stu[i].score[j];
			}
			print();
		}
	}
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
}