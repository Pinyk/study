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
	printf("����������룺");
	scanf("%s",&input);
	if(!(strcmp(input,str))) 
	{
		printf("�����������룺");
		scanf("%s",&a);
		printf("���ٴ����������룺");
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
			printf("�����޸ĳɹ���");
			return;
		}
	}
	else
	{
		printf("ԭ�����������������Զ��˳�����");
		Sleep(5000);
		exit(1);
	}
}
