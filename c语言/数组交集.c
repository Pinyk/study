#include<stdio.h>
#define N 100
int main()
{
	int c[N]={0};
	int a[20],b[20];
	int i=0,j=0,k,l;
	printf("请输入第一个数组\n"); 
	while(i<20)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
			break;
		i++;
	}
	printf("请输入第二个数组\n");
	while(j<20)
	{
		scanf("%d",&b[j]);
		if(b[j]==-1)
			break;
		j++;
	}
	for(k=0;k<i;k++)
	{
		c[a[k]]=1;
	}
	for(l=0;l<j;l++)
	{
		if(c[b[l]]==1)
		{
			c[b[l]]=0;
			printf("%d  ",b[l]);	
		}
	}
	return 0;
}
