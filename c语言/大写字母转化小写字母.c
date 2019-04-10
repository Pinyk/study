#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	printf("请输入一个大写字母\n");
	scanf("%c",&a);
	a=tolower(a);
	printf("%c",a);
	return 0; 
}
