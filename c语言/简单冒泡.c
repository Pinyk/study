#include<stdio.h>
void maopao(int *a,int n);
int main()
{
	int i;
	int a[11];
	printf("请从键盘上输入10个数\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	maopao(a,10);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	return 0;
}
void maopao(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
} 
