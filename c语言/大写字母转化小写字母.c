#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	printf("������һ����д��ĸ\n");
	scanf("%c",&a);
	a=tolower(a);
	printf("%c",a);
	return 0; 
}
