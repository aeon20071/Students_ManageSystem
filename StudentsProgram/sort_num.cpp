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
void sort_num()
{
	int i,j;
	printf("\n●原数据为：");
	print();
	for(i=1;i<len;i++)
		for(j=0;j<len-i;j++)
			if(stu[j].num>stu[j+1].num)
			{
				stu[49]=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=stu[49];
			}
	printf("\n●排名后：");
	print();
	printf("\n<按Enter以继续...>\n");
	getchar();getchar();
	system("cls");
}