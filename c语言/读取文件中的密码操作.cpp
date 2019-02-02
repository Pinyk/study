#include<stdio.h>
#include<cstdlib> 
int main()
{
	FILE *fp;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
	printf("%s",str);
	return 0;
}

