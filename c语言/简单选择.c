#include<stdio.h>
void xuanze(int *a,int n);
int main()
{
	int i;
	int a[11];
	printf("请从键盘上输入10个数\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	xuanze(a,10);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	return 0;
}
void xuanze(int *a,int n)
{
	int i,j,t,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[k]>a[j])
				k=j;
		}
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
	}
} 
