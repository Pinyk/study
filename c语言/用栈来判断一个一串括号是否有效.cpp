//�ж���������Ƿ���Ч 
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
		printf("��Ч1");
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
				a[i]=tihuan(a[i]);//���������滻����֮��Ӧ�������� 
				if(top==0)
				{
					printf("��Ч2");
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
			printf("��Ч"); 
		}
		else
		{
			printf("��Ч3");
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
