#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("请输入学生的成绩\n");
	scanf("%d",&a);
	b= a>=90 ? 'A' : (a>=70 ? 'B':(a>=60 ? 'C':'D'));
	printf("学生的成绩评价为%c",b); 
} 
