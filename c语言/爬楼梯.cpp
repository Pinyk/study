#include <stdio.h>
#include <stdlib.h>
int yu(int n);
int main()
{
    int n,a;
    printf("请输入楼梯数\n");
    scanf("%d",&n);
    a=yu(n);
    printf("爬楼梯的方法有%d种\n",a);
    return 0;
}
int yu(int n)
{
    long a;
    if(n==1)
        a=1;
    else if(n==2)
        a=2;
    else
        a=yu(n-1)+yu(n-2);
    return a;
}
