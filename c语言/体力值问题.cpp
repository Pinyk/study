#include<stdio.h>
int search(int *a,int b,int c);
int min;
int main()
{
	int arr[50];
	int a,b,c,j;
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
		scanf("%d",&arr[j]);
	}
	min=arr[0]; 
	b=search(arr,0,a);
	min=arr[1];
	c=search(arr,1,a);
	if(b>c)
		printf("%d",c);
	else
		printf("%d",b);
	return 0;
}
int search(int *a,int b,int c)
{
	if(c-b<=2)
		return min;
	else
	{
		if(a[b+1]>=a[b+2])
		{
			b=b+2;
			min=min+a[b];
			return search(a,b,c);
		}
		else
		{
			b++;
			min=min+a[b];
			return search(a,b,c);
		}			
	}
}



