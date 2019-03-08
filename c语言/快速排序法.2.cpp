#include<stdio.h>
void quicksort(int left,int right);
int a[100];
int main()
{
	int b;
	printf("请输入你要排序的个数");
	scanf("%d",&b);
	for(int c=1;c<=b;c++)
	{
		scanf("%d",&a[c]);
	 } 
	quicksort(1,b);
	printf("\n");
	for(int d=1;d<=b;d++)
	{
		printf("%d ",a[d]);
	}
	return 0;
}
void quicksort(int left,int right)
{
	int temp,i,j,t;
	if(left>right)
		return;
	temp=a[left];
	i=left;
	j=right;
	while(i!=j)
	{
		while(i<j&&a[j]>=temp)
		{
			j--;
		}
		while(i<j&&a[i]<=temp)
		{
			i++;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[left]=a[i];
	a[i]=temp;
	quicksort(i+1,right);
	quicksort(left,i-1);
}











