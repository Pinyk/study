#include<stdio.h>
#include<malloc.h>
//#include<string.h>
//#include<stdlib.h>

/*实现思路：创建好一个链表，然后定义两个指针，先让第一个指针开始走n-1步，然后两个指针同时走，同时遍历链表，这时当第一个指针走到链表末尾的时候，
第二个指针刚好走到目标节点，进行删除操作即可。*/ 

typedef struct Node                                         //定义链表结点 
{
	int data; 
	struct Node *next;
}Node,*Linklist;

Linklist create(){                                          //创建链表函数 
	Linklist head;
	Node *p,*t;
	int n = 0;
	head = (Node *)malloc(sizeof(Node));
	p=head;
	printf("请输入节点（当输入-1时，视为结束）:\n");
	while(1){
		t = (Node *)malloc(sizeof(Node));
		scanf("%d",&n);
		if(n == -1)
			break;
		t->data = n;
		p->next = t;
		p = p->next;
	}
	p->next = NULL;
	return head;
}

int output(Node *head){                                     //输出链表函数 
	Node *p;
	p = head->next;
	if(head == NULL || p == NULL){
		return 0;	
	}
	for(;p != NULL;p = p->next){
		printf("%-3d",p->data);
	}
	printf("\n");
	return 0; 
} 

int del(Node *head){
	int i=0,n;
	Node *first;
	Node *second;
	first=head;
	second=head;
	printf("请输入要删除的链表结点（倒序）：\n");
	scanf("%d",&n);
	while(i<n){
		second=second->next;
		i++;
	}
	for(i=0;second->next!=NULL;i++){						/*（由于定义的链表尾节点仍旧有值，所以应该判断尾节点的下一个节点为空）*/
		first=first->next;
		second=second->next;
	}
	first->next=first->next->next;
	output(head);
	return 0;
} 

main(){
	Node *head;
	head=create();
	output(head);
	del(head);
}

