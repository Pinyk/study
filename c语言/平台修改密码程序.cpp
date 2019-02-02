#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void repassword();
int main()
{
	repassword();
} 
void repassword()
{
	FILE *fp,*fp1;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
	char input[20]={0};
	char a[20]={0};
	char b[20]={0};
	printf("请输入旧密码：");
	scanf("%s",&input);
	if(!(strcmp(input,str))) 
	{
		printf("请输入新密码：");
		scanf("%s",&a);
		printf("请再次输入新密码：");
		scanf("%s",&b);
		if(!(strcmp(a,b)))
		{
			fp1=fopen("d:\\password.txt","wb");
			int i=0;
			while(a[i])
			{
				putw(a[i],fp1);
				i++;
			}
			fclose(fp1);
			printf("密码修改成功！");
			return;
		}
	}
	else
	{
		printf("原密码输入错误，五秒后将自动退出程序");
		Sleep(5000);
		exit(1);
	}
}
