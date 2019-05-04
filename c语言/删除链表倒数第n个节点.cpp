#include<stdio.h>
#include<stdlib.h>
int len;
typedef struct ren
{
	int zhi;
	struct ren *next;
}node,*Pnode;
void del(Pnode list,int a);
void bianli(Pnode list);
Pnode create(void);
int main()
{
	int n;
	Pnode list=create();
	printf("当前链表\n"); 
	bianli(list);
	printf("请输入n值\n");
	scanf("%d",&n);
	del(list,len-n+1);
	printf("删除之后\n"); 
	bianli(list);
	return 0;
}
Pnode create(void)
{
	int a,i;
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
void bianli(Pnode list)
{
	Pnode P=list->next;
	printf("遍历链表值为：");
	if(P==NULL)
	{
		printf("链表为空");
	}
	while(P!=NULL)
	{
		printf("%d ",P->zhi);
		P=P->next;
	}
	printf("\n");
}
void del(Pnode list,int a)
{
	int b=0;
	Pnode P=list;
	while(P&&b<a-1)
	{
		P=P->next;
		++b;
	}
	Pnode now=P->next;
	P->next=now->next;
	free(now);
	now=NULL; 
} 
