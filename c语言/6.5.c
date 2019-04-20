//镜像对调数组中的元素 
#include<stdio.h>
int main()
{
	int a[11]={1,2,3,4,5,6,7,8,9,10,11};
	int b,c,i,j,d;
	b=sizeof(a)/sizeof(a[0]);
	for(d=0;d<b;d++)
		printf("%d  ",a[d]);
	c=b/2;
	for(i=0;i<c;i++)
	{
		j=a[i];
		a[i]=a[b-i-1];
		a[b-i-1]=j;
	}
	printf("\n");
	for(d=0;d<b;d++)
		printf("%d  ",a[d]);
	return 0;
}
