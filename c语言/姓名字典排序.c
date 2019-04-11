#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char b[11];
	char a[5][11]={"gaoyuke","zhangyimou","liuqi","aishang","baitong"};
	printf("原名字顺序如下\n");
	for(i=0;i<5;i++)
		printf("%s\n",a[i]);
	printf("名字排序结果如下\n");
	for(j=0;j<4;j++)
	{
		for(i=0;i<4-j;i++)
		{
			if(strcmp(a[i],a[i+1])>0)
			{
				strcpy(b,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],b);
			}
		}
	}
	for(i=0;i<5;i++)
		printf("%s\n",a[i]);
	return 0;
}
