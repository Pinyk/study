#include<stdio.h>
int main()
{
	int arr[10],i=0;
	int k,M=0,n=1;
	int p=0,q=0;
	while(1)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)
			break;
		i++;
	}
	printf("%d",i);
	scanf("%d",&k);
	while(p<i)
	{
		n*=arr[p++];
		while(q<p&&n>=k)
			n/=arr[q++];
		M+=p-q;
	}
	printf("%d",M);
	return 0;
}
