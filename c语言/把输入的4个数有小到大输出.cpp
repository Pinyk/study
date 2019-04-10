#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[4];
	cout<<"ÇëÊäÈë4¸öÊý"<<endl;
	for(int i=0;i<=3;i++)
	{
		cin>>a[i];
	}
	sort(a,a+4);
	for(int i=0;i<=3;i++)
	{
		cout<<a[i];
	}
	return 0;
}
