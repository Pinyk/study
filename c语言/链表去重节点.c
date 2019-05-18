#include<stdio.h>
#include<stdlib.h>
typedef struct pen
{
	int zhi;
	struct pen *next;
}node,*Pnode;
Pnode create(void);
void bianli(Pnode list);
void del(Pnode list);
int main()
{
	Pnode list=create();
	bianli(list);
	del(list);
	bianli(list);
	return 0;
}
Pnode create()
{
	int a;
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Pnode Ptail=Phead;
	Ptail->next=NULL;
	while(1)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		scanf("%d",&a);
		if(a==256)
			break;
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
		printf("%d  ",P->zhi);
		P=P->next;
	}
	printf("\n");
}
void del(Pnode list)
{
	int a,b;
	Pnode P=list;
	P=P->next;
	Pnode now;
	now=P->next;
	while(now)
	{
		a=P->zhi;
		b=now->zhi;
		if(b==a)
		{
			P->next=now->next;
			free(now);
			now=NULL;
			now=P->next;
		}
		else
		{
			P=P->next;
			now=now->next;
		}
	}
}
