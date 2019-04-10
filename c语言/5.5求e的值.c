#include<stdio.h>
int main()
{
	double a=1,b=1,c=1,sum=1;
	while(b>0.0000001)
	{
		c=c*a;
		sum=sum+1/c;
		b=1/c;
		a++;
	}
	printf("%lf",sum);
}

