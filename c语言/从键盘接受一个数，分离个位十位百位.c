#include<stdio.h>
int main()
{
	int a,bit,shi,bai;
	printf("������һ����λ��\n");
	scanf("%d",&a);
	if(a>999||a<100)
		printf("����������λ��");
	else
	{
		bit=a%10;
		shi=(a%100)/10;
		bai=a/100;
		printf("������ĸ�λ��%d,ʮλ��%d����λ��%d",bit,shi,bai);
	}
	return 0; 
}
