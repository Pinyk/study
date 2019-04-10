#include<stdio.h>
int main()
{
	int a,b,c,i,j;
	for(a=0;a<=7;a++)
	{
		b=7-a;
		for(i=0;i<=a;i++)
			printf(" ");
		for(i=0;i<=b;i++)
			printf("*");
			printf("\n");
	}
} 
