#include<stdio.h>
extern struct student
{
	int num;
	char name[10];
	float score[3];
	float total;
}stu[50];
extern int len;
void print()
{
	int i,j;
	printf("\n���Ѵ洢ѧ����¼���£�\n\n");
	printf("ѧ��\t\t����\t����\t��ѧ\tӢ��\t�ܳɼ�\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t%-6s\t",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
			printf("%.2f\t",stu[i].score[j]);
		printf("%.2f\n",stu[i].total);
	}
}