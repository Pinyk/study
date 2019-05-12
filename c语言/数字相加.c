#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	gets(a);
	int b,c,i;
	int sum;
	b = strlen(a);
	sum = 0;
	for(i=0;i<b;i++)
		sum+=(a[i]-48);
	c=(sum-1)%9+1;
	printf("%d",c);
	return 0;
}
