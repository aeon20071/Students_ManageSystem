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
	printf("��������Ҫ�޸�ѧ����������");
	scanf("%s",&sname);
	for(i=0;i<len;i++)
	{
		if(strcmp(sname,stu[i].name)==0)
		{
			printf("ѧ��\t\t����\t����\t��ѧ\tӢ��\t�ܳɼ�\n");
			printf("%d\t%-6s\t",stu[i].num,stu[i].name);
			for(j=0;j<3;j++)
				printf("%.2f\t",stu[i].score[j]);
			printf("%.2f\n",stu[i].total);
			stu[i].total=0;
			printf("���������ѧ����ʮλѧ�ţ�");
			scanf("%d",&stu[i].num);
			printf("���������ѧ����������");
			scanf("%s",stu[i].name);
			printf("���������ѧ�������ſγɼ������ġ���ѧ��Ӣ���");
			for(j=0;j<3;j++)
			{
				scanf("%f",&stu[i].score[j]);
				stu[i].total+=stu[i].score[j];
			}
			print();
		}
	}
	printf("\n<��Enter�Լ���...>\n");
	getchar();getchar();
	system("cls");
}