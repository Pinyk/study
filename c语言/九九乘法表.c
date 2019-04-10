#include<stdio.h>
int main()
{
	int i,j,k,count=0;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=i*j;
			printf("%-2d*%2d=%2d  ",j,i,k);
		}
		printf("\n");
	}
} 
