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
	printf("��ǰ����\n"); 
	bianli(list);
	printf("������nֵ\n");
	scanf("%d",&n);
	del(list,len-n+1);
	printf("ɾ��֮��\n"); 
	bianli(list);
	return 0;
}
Pnode create(void)
{
	int a,i;
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Pnode Ptail=Phead;
	Ptail->next=NULL;
	printf("������ڵ�����");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		printf("���%d���ڵ�����ݣ�",i+1);
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
	printf("��������ֵΪ��");
	if(P==NULL)
	{
		printf("����Ϊ��");
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
