#include<stdio.h>
#include<stdlib.h>
typedef struct ren
{
	int n;
	struct ren * next;
}*Pnode,node;

int n;

void del(Pnode head,int k)
{
	int o=2;
	Pnode now = head;
	Pnode M;
	while(n!=1)
	{
		while(o<k)
		{
			now=now->next;
			o++;
		}
		M=now->next;
		now->next = M->next;
		free(M);
		M=NULL;
		n--;
		o=0;
	}
	printf("%d",now->n);
}


Pnode create(void)
{
	int i;
	Pnode head,tail;
	head = (Pnode)malloc(sizeof(node));
	tail = head;
	tail->next = head;
	printf("please input node nums\n");
	scanf("%d",&n);
	scanf("%d",&head->n);
	for(i=1;i<n;i++)
	{
		Pnode pnew = (Pnode)malloc(sizeof(node));
		scanf("%d",&pnew->n);
		tail->next = pnew;
		pnew->next = head;
		tail = pnew;
	}
	return head;
}

void print(Pnode head,int n)
{
	int i = 0;
	Pnode now = head;
	while(i < n)
	{
		printf("%d",now->n);
		now = now->next;
		i++;
	}
}

int main()
{
	int k;
	Pnode list;
	list = create();
	printf("who want out\n");
	scanf("%d",k);
	del(list,k);
}
