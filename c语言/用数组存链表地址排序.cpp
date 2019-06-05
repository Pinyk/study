#include<stdio.h>
#include<stdlib.h>
typedef struct ren
{
	int zhi;
	struct ren *next;
}node,*Pnode;
Pnode create(void);
void sort(int *a,int n);
int reserve(Pnode list,int *a);
int main()
{
	int n,i;
	Pnode list=create();
	int (*arr)[10]; 
	n=reserve(list,*arr);
	printf("\n");
	sort(*arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(arr+i));
	}
	return 0;
}
Pnode create(void)
{
	int a,i,len;
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Pnode Ptail=Phead;
	Ptail->next=NULL;
	printf("请输入节点数：");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		printf("请第%d个节点的数据：",i+1);
		scanf("%d",&a);
		Pnew->zhi=a; 
		Ptail->next=Pnew;
		Pnew->next=NULL;
		Ptail=Pnew;
	}
	return Phead;
}
int reserve(Pnode list,int *a)
{
	int	i=0;
	Pnode P=list->next;
	while(P!=NULL)
	{
		*a[i]=P;
		P=P->next;
		i++;
	}
	return i;
}
void sort(int *a,int n)
{
	int t;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(a+i)<*(a+i+1))
			{
				t=*(a+i);
				*(a+i)=*(a+i+1);
				*(a+i+1)=t;
			}
		}
	}
}






