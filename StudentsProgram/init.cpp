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
		printf("���������ѧ����ʮλѧ�ţ�");
		scanf("%d",&stu[len].num);
		if(stu[len].num==0)
			break;
		printf("���������ѧ����������");
		scanf("%s",stu[len].name);
		printf("���������ѧ�������ſγɼ������ġ���ѧ��Ӣ���");
		for(j=0;j<3;j++)
		{
			scanf("%f",&stu[len].score[j]);
			stu[len].total+=stu[len].score[j];
		}
		len++;
	}
	print();
	printf("\n<��Enter�Լ���...>\n");
	getchar();getchar();
	system("cls");
}