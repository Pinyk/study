#include<stdio.h>
int main()
{
	int a;
	printf("������Ա������\n");
	scanf("%d",&a);
	if(a>=22 && a<=30)
	{
		printf("��������ҵ��Ա\n");
	}
	else if(a>=31 && a<=45)
	{
		printf("����������Ա\n");
	}
	else if(a>=45 && a<=55)
	{
		printf("���βֿ����Ա\n");
	}
	else if(a>55) 
	{
		printf("�������Ѿ���������");
	}
	else
	{
		printf("�ù�˾û����������Ա��");
	} 
	return 0; 
}
