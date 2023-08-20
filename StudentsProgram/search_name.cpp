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
void qname()
{
	int i,j;
	char sname[10];
	printf("请输入要查找的姓名：");
	scanf("%s",&sname);
	for(i=0;i<len;i++)
	{
		if(strcmp(sname,stu[i].name)==0)
		{
			printf("查找成功\n\n");
			printf("学号\t\t姓名\t语文\t数学\t英语\t总成绩\n");
			printf("%d\t%-6s\t",stu[i].num,stu[i].name);
			for(j=0;j<3;j++)
				printf("%.2f\t",stu[i].score[j]);
			printf("%.2f\n",stu[i].total);
			break;
		}
		else
			printf("Error\n");
		break;
	}
}