#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int land()
{
    char ch[] = { "12345" };
    char input[20] = { 0 };
    while (1)
    {
        printf("�����������Ա����(Ĭ������Ϊ12345):");
        scanf("%s",input);
        if(!strcmp(ch,input))
        {
            return 0;
        }
        else
        {
            printf("���������󣬰�Enter������\n\n");
			getchar();
			getchar();
			system("cls");
			return -1;
        }
	}
    return -2;
}