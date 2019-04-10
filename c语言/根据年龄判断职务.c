#include<stdio.h>
int main()
{
	int a;
	printf("请输入员工年龄\n");
	scanf("%d",&a);
	if(a>=22 && a<=30)
	{
		printf("担任外勤业务员\n");
	}
	else if(a>=31 && a<=45)
	{
		printf("担任内勤文员\n");
	}
	else if(a>=45 && a<=55)
	{
		printf("担任仓库管理员\n");
	}
	else if(a>55) 
	{
		printf("该年龄已经可以退休");
	}
	else
	{
		printf("该公司没有这个年龄的员工");
	} 
	return 0; 
}
