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
void del()
{
	int i,j,n;
	printf("●请输入删除位置：");
	scanf("%d",&n);
	if(n>=1&&n<=len)
	{
	for(i=n;i<len;i++)
		stu[i-1]=stu[i]; 
	len--;
	print();
	}
	else
		printf("Error");
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
}