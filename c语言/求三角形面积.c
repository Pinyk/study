#include<stdio.h>
#include<math.h> 
int main()
{
	float area,s,a,b,c;
	printf("�����������ε�����\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
	printf("�����ε������%0.3f",area);
	return 0;
} 
