#include<stdio.h>
int rn(int a);//�����ж����� 
void xs(int a,int b);//��ʾ�������� 
int main()
{
	int a,b,c,i;
	printf("����������ĳ���ĳ��\n");
	scanf("%d %d",&a,&b);
	xs(a,b);
	return 0;
}
int rn(int a)
{
	int b,c;
	if(a%1000==0&&a%400==0)
	{
		return 366;
	}
	if(a%4==0&&a%100!=0)
	{
		return 366;
	}
	else
		return 365;
}

void xs(int a,int b)
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int ri[12];//���ڴ��ĳһ��ÿ���µĵ�һ�������ڼ� 
	int c=0,d,e,i,j,flag,m;
	if(rn(a)==366)
	{
		month[1]=29;
	}
	ri[0]=(a-1+(a-1)/4-(a-1)/100+(a-1)/400+rn(a))%7;//����copy��һ���ж�ĳһ��1��1��Ϊ���ڼ��ĵ��ƹ�ʽ 
	for(m=1;m<12;m++)
	{
		ri[m]=((month[m-1]-(7-ri[m-1]))%7);
		/*����һ�����ƹ�ʽ���������һ���µ�һ�����ܼ�
		�õ�һ��ֵ���Ƴ����������·ݵ�һ�����ܼ����������� 
		*/ 
	}
	printf("%d��%d�µ���������\n",a,b);
	e=ri[b-1];
	i=b-1;
	printf(" �� һ �� �� �� �� ��\n");
	flag=1;
	for(j=0;j<e;j++)
	{
		printf("   ");
	}
	while(flag<=month[i])
	{
		printf("%3d",flag);
		flag++;
		e=(e+1)%7;//��7���� 
		if(e%7==0)
			printf("\n");
	}
	printf("\n");
}
