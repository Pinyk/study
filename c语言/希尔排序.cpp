#include<stdio.h>
#include<stdlib.h>
void sort(int s[],int n,int d)
{
	int i,j;
	for(i=d+1;i<n;i++)
	if(s[i]<s[i-d])
	{
		s[0]=s[i];
		j=i-d;
		do
		{
		s[j+d]=s[j];
		j-=d;
		}
	while(j>0&&s[0]<s[j]);
	s[j+d]=s[0];	
	}
	
}
void shellsort(int r[],int n)
{
	int d=n;
	do
	{
		d=d/3+1;
		sort(r,n,d);
		 
	}
	while(d>1);
}
int main()

{
	int i,x[11];
	printf("请输入10个整数\n");
	for(i=1;i<=10;i++)
	scanf("%d",&x[i]);
	puts("你输入的序列是:");
	for(i=1;i<=10;i++)
	printf("%3d",x[i]);
	shellsort(x,11);
	printf("\n希尔排序结果如下:");
	for(i=1;i<=10;i++)
	printf("%3d",x[i]);
	printf("\n");
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
