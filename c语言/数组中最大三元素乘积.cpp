#include<stdio.h>
#define N 100
int main()
{
	int arr[N],i,a,j,t,l;
	scanf("%d",&a);
	for(i = 0; i < a; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < a-1; i++)
	{
		for(j = 0; j < a - i - 1; j++)
		{
			if(arr[j] < arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;		
			}		
		}	
	}
	printf("%d",(arr[0]*arr[1]*arr[2]));
	return 0;
}
