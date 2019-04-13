#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
typedef struct top
{
	int zhi;
	struct top *next;
}node,*Pnode;
int M;
int arr[100];
Pnode create(void);
void sortt(Pnode a,Pnode b);
int main()
{
	int i=0;
	cout<<"输入第一个链表"<<endl; 
	Pnode list1=create();
	cout<<"输入第二个链表"<<endl;
	Pnode list2=create();
	sort(arr,arr+M);
	Pnode list3;
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Pnode Ptail=Phead;
	Ptail->next=NULL;
	cout<<"第三个链表值"<<endl; 
	while(i<M)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		Pnew->zhi=arr[i];
		cout<<Pnew->zhi<<" ";
		Ptail->next=Pnew;
		Pnew->next=NULL;
		Ptail=Pnew;
		i++;
	}
	return 0;
}
Pnode create()
{
	int a,i=0;
	int b;
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Pnode Ptail=Phead;
	Ptail->next=NULL;
	cout<<"请输入该链表的节点数"<<endl;
	cin>>b;
	while(i<b)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		cin>>a;
		arr[M]=a;
		M++;
		Pnew->zhi=a;
		Ptail->next=Pnew;
		Pnew->next=NULL;
		Ptail=Pnew;
		i++;
	}
}

