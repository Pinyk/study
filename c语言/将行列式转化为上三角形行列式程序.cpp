#include<stdio.h>
#include<iostream>
#include<stdlib.h> 
using namespace std;

void op(double *a,int row,int col,int temp)
{		double NUM1,NUM2;
		NUM1=a[temp*col+temp];
		for(int i=temp+1;i<row;i++)
		{
				NUM2=a[i*col+temp];
			for(int j=temp;j<col;j++)
			{
				a[i*col+j]=a[i*col+j]+NUM2*a[temp*col+j]*(-1)/NUM1;
			}
		}
}

int main(){

	int row, col;
	double value=1;
	cout<<"����������";
	cin>>row;
	cout<<"����������";
	cin>>col;

	double  *a=(double*)malloc(row*col*sizeof(double));
	cout<<"����������Ԫ��"<<endl;

	for(int i=0;i<col*row;i++)
	{
			cin>>a[i];
	}
	 cout<<"����������ɹ�������"<<endl;
	int k=row;
	if(k>col) k=col;

	for(int i=0;i<k-1;i++)
	{
	  op(a,row,col,i);
	  cout<<"����"<<endl;
	  for(int i=0;i<col*row;i++)
		{
		cout<<a[i]<<" ";
		if((i+1)%col==0)
			cout<<endl;
		}
	}
	cout<<"���"<<endl;
	for(int i=0;i<col*row;i++)
	{
		cout<<a[i]<<" ";
		if((i+1)%col==0)
			cout<<endl;
	}
	for(int i=0;i<k;i++)
		value*=a[i*col+i];
	cout<<"����ʽ��ֵΪ"<<value<<endl;
	system("pause");
	return 0;
}
