#include<stdio.h>
#include<malloc.h>
//#include<string.h>
//#include<stdlib.h>

/*ʵ��˼·��������һ������Ȼ��������ָ�룬���õ�һ��ָ�뿪ʼ��n-1����Ȼ������ָ��ͬʱ�ߣ�ͬʱ����������ʱ����һ��ָ���ߵ�����ĩβ��ʱ��
�ڶ���ָ��պ��ߵ�Ŀ��ڵ㣬����ɾ���������ɡ�*/ 

typedef struct Node                                         //���������� 
{
	int data; 
	struct Node *next;
}Node,*Linklist;

Linklist create(){                                          //���������� 
	Linklist head;
	Node *p,*t;
	int n = 0;
	head = (Node *)malloc(sizeof(Node));
	p=head;
	printf("������ڵ㣨������-1ʱ����Ϊ������:\n");
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

int output(Node *head){                                     //��������� 
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
	printf("������Ҫɾ���������㣨���򣩣�\n");
	scanf("%d",&n);
	while(i<n){
		second=second->next;
		i++;
	}
	for(i=0;second->next!=NULL;i++){						/*�����ڶ��������β�ڵ��Ծ���ֵ������Ӧ���ж�β�ڵ����һ���ڵ�Ϊ�գ�*/
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

