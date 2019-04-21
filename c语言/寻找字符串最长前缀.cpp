#include<iostream>
using namespace std;
void bijiao(char **a,int b,int c,int d);
int main()
{
	int a,b;
	printf("请输入需要判读的字符串个数和最长字符串的长度\n");
	cin>>a>>b; 
	char **arr;
	arr = new char *[a];
	for(int i=0;i<a;i++)
		arr[i] = new char[b];
	for(int j=0;j<a;j++)
		cin>>arr[j];
	bijiao(arr,a,0,b);
	return 0;
}
void bijiao(char **a,int b,int c,int d)
{
	int i,j,k,flag=0;
	if(c>d)
		return;
	for(i=0;i<b-1;i++)
	{
		if(a[i][c]!=a[i+1][c])
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		if(c==0)
		{
			cout<<" ";
			return;
		}
		else
		{
			for(j=0;j<c;j++)
				cout<<a[1][j];
			return ;
		}
	}
	if(flag==0)
		bijiao(a,b,c+1,d);
}
