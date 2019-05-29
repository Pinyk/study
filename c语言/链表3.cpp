#include<stdio.h>
#include<stdlib.h>
int M;
int arr[100];
typedef struct ren
{
	int zhi;
	struct ren *next;
}node,*Pnode;
void del(Pnode list,int a); 
void del_all(Pnode list);
void find(Pnode list);
void charu(Pnode list,int a,int b);
void bianli(Pnode list);
Pnode create(void);
int main()
{
	Pnode list=create();
	bianli(list);
	find(list);
	charu(list,3,10); 
	return 0;
}
Pnode create(void)
{
	int len;
	int a,i;
	Pnode Phead=(Pnode)malloc(sizeof(node));
	if(Phead==NULL)
	{
		printf("��������ʧ��");
		exit(1); 
	}
	Pnode Ptail=Phead;
	Ptail->next=NULL;
	printf("������ڵ�����");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		if(Pnew==NULL)
		{
			printf("�ڴ����ʧ��");
			exit(1); 
		}
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
		printf("%d",P->zhi);
		P=P->next;
	}
	printf("\n");
}
void find(Pnode list)
{
	Pnode P=list->next;
	int a=0;
	int b=0;
	printf("������Ҫ�ĵ���");
	scanf("%d",&a);
	while(P!=NULL&&P->zhi!=a)
	{
		P=P->next;
		++b;
}
	if(P!=NULL)
	{
		printf("����ĺ����");
		scanf("%d",&(P->zhi));
	}
	else
		printf("�Ҳ����ýڵ� ");
	printf("\n");
}
void charu(Pnode list,int a,int b)
{
	int c=0;
	Pnode P=list;
	while(P!=NULL&&c<a-1)
	{
		P=P->next;
		++c;
	}
	Pnode now=(Pnode)malloc(sizeof(node));
	if(now==NULL)
	{
		printf("�ڴ����ʧ��");
		exit(1); 
	}
	now->zhi=b;
	now->next=P->next;
	P->next=now;
	bianli(list);
}
void del_all(Pnode list)
{
	Pnode P,now;
	P=list;
	while(P!=NULL)
	{
		now=P->next;
		free(P);
		P=now;
	}
	printf("����ɾ���ɹ�");
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





