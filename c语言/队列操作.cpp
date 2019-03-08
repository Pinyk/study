#include<stdio.h>
struct queue
{
	int data[100];
	int head;//建立队首 
	int tail;//建立队尾 
};
int main()
{
	struct queue q;
	int i;
	q.head=1;
	q.tail=1;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&q.data[q.tail]);
		q.tail++;
	}
	while(q.head<q.tail)
	{
		printf("%d ",q.data[q.head]); 
		q.head++;
		q.data[q.tail]=q.data[q.head];
		q.head++;
	}
	return 0;
}
