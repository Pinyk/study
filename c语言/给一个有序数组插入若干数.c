#include<stdio.h>
void charu(int *a,int n,int i);
int main()
{
	int b,c=9,i,j;
	int d[100];
	int a[200]={1,3,7,9,18,20,40,50,55,66};
	printf("ԭ����������\n");
	for(i=0;i<10;i++)
        printf("%d  ",a[i]);
    printf("\n");
	printf("������Ҫ�������ĸ���\n");
	scanf("%d",&b);
    for(j=0;j<b;j++)
    {
    	scanf("%d",&d[j]);
    	charu(a,d[j],c);
    	c++;
	}
    for(i=0;i<10+b;i++)
        printf("%d  ",a[i]);
    return 0;
}
void charu(int *a,int n,int i)
{
	while(i>=0&&a[i]>n)
    {
        a[i+1]=a[i];
        i--;
    }
    i++;
    a[i] = n;
} 
