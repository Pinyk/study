#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("������ѧ���ĳɼ�\n");
	scanf("%d",&a);
	b= a>=90 ? 'A' : (a>=70 ? 'B':(a>=60 ? 'C':'D'));
	printf("ѧ���ĳɼ�����Ϊ%c",b); 
} 
