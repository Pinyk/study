#include<stdio.h>
int main()
{
	int a;
	printf("������һ������\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("�����������\n");
		if(a%2==0)
		{
			printf("Ҳ��ż��\n");
		}
		else
		{
			printf("Ҳ������\n");
		}
	}
	else if(a<0)
	{
		printf("������Ǹ���\n");
		if(a%2==0)
		{
			printf("Ҳ��ż��\n");
		}
		else
		{
			printf("Ҳ������\n");
		}
	}
	else
	{
		printf("������ǼȲ���������Ҳ���Ǹ���\n"); 
	}
	return 0; 
}
