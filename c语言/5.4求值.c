#include<stdio.h>
int main()
{
	int a,b,c,d=0,sum=0;
	printf("请输入一个数\n");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		sum=sum+b;
		d=d+sum;
	}
	printf("%d",d);
	return 0;
}
