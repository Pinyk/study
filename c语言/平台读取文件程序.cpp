#include<stdio.h>
#include<stdlib.h>
typedef struct star
{
	char name[10];//����
	int height[4];//��� 
	char qiuji[4];//�� 
	char num[20];//���±�� 
	int age;//���� 
	struct star *next;  
}Node;
char passward[9];
Node *nodefirst,*nodeend;
char gsave,gfirst;
void readdata(void);
int main()
{
	readdata();
}
void readdata(void)
{
	FILE *fp;
	Node *node;
	if((fp=fopen("d:\\menu","rb"))==NULL)
	{
		gfirst=1;
		return;
	}
	while(!feof(fp))
	{
		node=(Node *)malloc(sizeof(Node));
		if(node==NULL)
		{
			printf("�����ڴ�ʧ��");
			return;
		}
		fread(node,sizeof(Node),1,fp);
		if(feof(fp))
			break;
		if(nodefirst==NULL)
		{
			nodefirst=node;
			nodeend=node;
		}
		else
		{
			nodefirst->next=node;
			nodeend=node;
		}
		nodeend->next=NULL;
	}
	gfirst=0;
	fclose(fp);
} 
