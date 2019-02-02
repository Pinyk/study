#include<stdio.h>
#include<string.h>
int login();
int main()
{
    login();
    return 0;
}
int login()
{
	FILE *fp;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
    int i = 3,j;
    char input[20] = { 0 };
    while (i)
    {
        printf("请输入你的登录密码:");
        scanf("%s", input);
        if (!strcmp(str, input))
        {
            j=0;
            break; 
        }
        else
        {
            i--;
            printf("输入有误，剩余输入次数为%d\n",i);
        }
    }
    if (i == 0)
    {
        j=-1;
    }
    if (j == 0)
    {
        printf("登录成功！\n");
 
    }
    else if (j == -1)
    {
        printf("输入次数已经用尽，系统将自动退出！\n");
    }
    return 0;
}
