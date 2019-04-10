#include<stdio.h>
int main()
{
	float a,b,c,d,average;
	printf("请输入4个数\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	average=(a+b+c+d)/4;
	printf("这4个数平均值为%.3f",average);
	return 0;
}
