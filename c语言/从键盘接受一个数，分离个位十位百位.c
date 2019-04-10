#include<stdio.h>
int main()
{
	int a,bit,shi,bai;
	printf("请输入一个三位数\n");
	scanf("%d",&a);
	if(a>999||a<100)
		printf("该数不是三位数");
	else
	{
		bit=a%10;
		shi=(a%100)/10;
		bai=a/100;
		printf("这个数的个位是%d,十位是%d，百位是%d",bit,shi,bai);
	}
	return 0; 
}
