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
	printf("�����������λ�ã�");
	scanf("%d",&n);
	if(n>=1&&n<=len+1)
	{
	for(i=len;i>=n;i--)
		stu[i]=stu[i-1]; 
	stu[n-1].total=0;
	printf("���������ѧ����ʮλѧ�ţ�");
	scanf("%d",&stu[n-1].num);
	printf("���������ѧ����������");
	scanf("%s",stu[n-1].name);
	printf("���������ѧ�������ſγɼ������ġ���ѧ��Ӣ���");
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
	printf("\n<��Enter�Լ���...>\n");
	getchar();getchar();
	system("cls");
}