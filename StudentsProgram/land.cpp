#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int land()
{
    char ch[] = { "12345" };
    char input[20] = { 0 };
    while (1)
    {
        printf("●请输入管理员密码(默认密码为12345):");
        scanf("%s",input);
        if(!strcmp(ch,input))
        {
            return 0;
        }
        else
        {
            printf("●输入有误，按Enter继续…\n\n");
			getchar();
			getchar();
			system("cls");
			return -1;
        }
	}
    return -2;
}