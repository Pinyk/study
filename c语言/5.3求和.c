#include<stdio.h>
int main()
{
	double a,b=1,c=0;
	for(a=1;a<=100;a++)
	{
		c=c+b*(1/a);
		b=-b;
	}
	printf("%lf",c);
	return 0;
} 

