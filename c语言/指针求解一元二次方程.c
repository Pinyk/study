#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
int main()
{
	double e,x1,x2;
	double *p;
	p=(double*)malloc(3*sizeof(double));
	scanf("%lf %lf %lf",&p[0],&p[1],&p[2]);
	if(p[1]*p[1]-4*p[0]*p[2]<0)
		printf("�ú�������������");
	else  
	{
		e=sqrt(p[1]*p[1]-4*p[0]*p[2]); 
		if(p[0]==0)
			printf("�ú�������һԪ���κ���");
		else
		{
			x1=(e-p[1])/(2*p[0]);
			x2=((0-e)-p[1])/(2*p[0]);
			printf("�ú���������Ϊ: %.3lf %.3lf\n",x1,x2);
		}
	} 
	free(p);
}
