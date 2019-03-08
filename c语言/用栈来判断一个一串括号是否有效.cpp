//判断括号配对是否有效 
#include<stdio.h>
#include<string.h> 
char tihuan(char m);
int main()
{
	char a[50],b[50];
	int top=0,len;
	gets(a);
	len=strlen(a);
	if(len%2!=0)
	{
		printf("无效1");
	}
	else
	{
		for(int i=0;i<len;i++)
		{
			if(a[i]=='{'||a[i]=='('||a[i]=='[')
			{
				b[top]=a[i];
				top++;
			}
			if(a[i]=='}'||a[i]==')'||a[i]==']')
			{
				a[i]=tihuan(a[i]);//将右括号替换成与之对应的左括号 
				if(top==0)
				{
					printf("无效2");
				}
				else
				{
					top--;
					if(b[top]==a[i])
					{
						;
					}
					else
					{
						top++;
					}
				}
			}
		}
		if(top==0)
		{
			printf("有效"); 
		}
		else
		{
			printf("无效3");
		}
	}
}
char tihuan(char m)
{
	if(m=='}')
	return '{';
	if(m==')')
	return '(';
	if(m==']')
	return '[';
}
