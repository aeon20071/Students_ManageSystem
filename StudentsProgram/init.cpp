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
void init()
{
	int j;
	while(1)
	{
		stu[len].total=0;
		printf("●请输入该学生的十位学号：");
		scanf("%d",&stu[len].num);
		if(stu[len].num==0)
			break;
		printf("●请输入该学生的姓名：");
		scanf("%s",stu[len].name);
		printf("●请输入该学生的三门课成绩（语文、数学、英语）：");
		for(j=0;j<3;j++)
		{
			scanf("%f",&stu[len].score[j]);
			stu[len].total+=stu[len].score[j];
		}
		len++;
	}
	print();
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
}