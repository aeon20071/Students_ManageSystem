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
	printf("������Ҫ���ҵ�������");
	scanf("%s",&sname);
	for(i=0;i<len;i++)
	{
		if(strcmp(sname,stu[i].name)==0)
		{
			printf("���ҳɹ�\n\n");
			printf("ѧ��\t\t����\t����\t��ѧ\tӢ��\t�ܳɼ�\n");
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