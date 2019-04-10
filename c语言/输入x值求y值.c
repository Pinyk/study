#include<stdio.h>
#include<math.h>
int main()
{
	double a,y;
	printf("ÇëÊäÈëxµÄÖµ\n");
	scanf("%lf",&a);
	if(a>=0 && a<20)
	{
		y=5*a+11;
		printf("%lf\n",y);
	}
	else if(a>=20 && a<40)
	{
		y=sin(a)+cos(a);
		printf("%lf\n",y);
	}
	else if(a>=40 && a<60)
	{
		y=exp(a)-1;
		printf("%lf\n",y);
	}
	else if(a>=60 && a<80) 
	{
		y=log(a);
		printf("%lf\n",y);
	}
	else
	{
		printf("0");
	} 
	return 0; 
}
