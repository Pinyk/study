#include<stdio.h>
int rn(int a);//用于判断闰年 
void xs(int a,int b);//显示日历函数 
int main()
{
	int a,b,c,i;
	printf("请依次输入某年和某月\n");
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
	int ri[12];//用于存放某一年每个月的第一天是星期几 
	int c=0,d,e,i,j,flag,m;
	if(rn(a)==366)
	{
		month[1]=29;
	}
	ri[0]=(a-1+(a-1)/4-(a-1)/100+(a-1)/400+rn(a))%7;//网上copy的一个判断某一年1月1日为星期几的递推公式 
	for(m=1;m<12;m++)
	{
		ri[m]=((month[m-1]-(7-ri[m-1]))%7);
		/*用上一个递推公式可以算出第一个月的一号是周几
		用第一个值来推出该年其他月份第一天是周几并存入数组 
		*/ 
	}
	printf("%d年%d月的日历如下\n",a,b);
	e=ri[b-1];
	i=b-1;
	printf(" 日 一 二 三 四 五 六\n");
	flag=1;
	for(j=0;j<e;j++)
	{
		printf("   ");
	}
	while(flag<=month[i])
	{
		printf("%3d",flag);
		flag++;
		e=(e+1)%7;//逢7换行 
		if(e%7==0)
			printf("\n");
	}
	printf("\n");
}
