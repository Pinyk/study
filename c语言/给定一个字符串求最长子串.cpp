#include<stdio.h>
#include<string.h>
int MAX;
int main()
{
	int a,b,i=0,j=1,flag=1,t;
	char c[100];
	scanf("%s",c);
	a=strlen(c);
	for(b=0;b<a;b++)
	{
		while(i<=b)
		{
			if(c[i]==c[j])
			{
				flag=0;
			} 
			i++;
		}
		if(j>=a)
			break;
		if(flag==1)
		{
			j++;
			MAX=j;
			i=0;
		}
		else if(flag==0)
		{
			MAX=0;
			j++;
			flag=1;
			i++; 
		}
	}
	printf("%d",MAX);
	return 0;
}
