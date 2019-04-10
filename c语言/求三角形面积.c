#include<stdio.h>
#include<math.h> 
int main()
{
	float area,s,a,b,c;
	printf("请输入三角形的三边\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
	printf("三角形的面积是%0.3f",area);
	return 0;
} 
