#include<stdio.h>
#include<stdlib.h>
void print();
extern struct student
{
	int num;
	char name[10];
	float score[3];
	float total;
}stu[50];
extern int len;
void add()
{
	int i,n;
	printf("●请输入插入位置：");
	scanf("%d",&n);
	if(n>=1&&n<=len+1)
	{
	for(i=len;i>=n;i--)
		stu[i]=stu[i-1]; 
	stu[n-1].total=0;
	printf("●请输入该学生的十位学号：");
	scanf("%d",&stu[n-1].num);
	printf("●请输入该学生的姓名：");
	scanf("%s",stu[n-1].name);
	printf("●请输入该学生的三门课成绩（语文、数学、英语）：");
	for(i=0;i<3;i++)
	{
		scanf("%f",&stu[n-1].score[i]);
		stu[n-1].total+=stu[n-1].score[i];
	}
	len++;
	print();
	}
	else
		printf("Error");
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
}