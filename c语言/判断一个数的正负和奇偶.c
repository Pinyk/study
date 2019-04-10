#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("这个数是正数\n");
		if(a%2==0)
		{
			printf("也是偶数\n");
		}
		else
		{
			printf("也是奇数\n");
		}
	}
	else if(a<0)
	{
		printf("这个数是负数\n");
		if(a%2==0)
		{
			printf("也是偶数\n");
		}
		else
		{
			printf("也是奇数\n");
		}
	}
	else
	{
		printf("这个数是既不是正数，也不是负数\n"); 
	}
	return 0; 
}
