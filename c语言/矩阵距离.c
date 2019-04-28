#include<stdio.h>
#include<math.h>
double dis(int a,int b);
int brr[100],crr[100];
int main()
{
	int a,i,k,b=0;
	double arr[100][100];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&brr[i]);
		scanf("%d",&crr[i]);
	}
	for(i=0;i<a;i++)
	{
		for(k=0;k<a;k++)
		{
			arr[i][k]=dis(k,i);
		}
	}
	for(i=0;i<a;i++)
	{
		for(k=0;k<a;k++)
		{
			printf("%lf         ",arr[i][k]);
		}
		printf("\n");
	}
	return 0;
}
double dis(int a,int b)
{
	double s;
	s=sqrt(pow(brr[a]-brr[b],2)+pow(crr[a]-crr[b],2));
	return s;
}
