#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

typedef struct star
{
	char name[10];//����
	int height;//��� 
	char qiuji[4];//�� 
	int num;//���±�� 
	int age;//���� 
	struct star *next; 
}Node;

char passward[9];
Node *nodefirst,*nodeend;
char gsave,gfirst;

void add(void);
void find(void);
void list(void);
void change(void);
void sum(void);
void del(void);
void repassword();
void readdata(void);//���ļ��л�ȡ������Ϣ���������� 
void savedata(void);//�������е����ݱ��浽�ļ���
Node *findname(char *name);
Node *findheight(int height);
Node *findnum(int num);
Node *findage(int age);  
void displaynode(Node *node);
void bound(char ch,int n);
void login();
void menu();

int main()
{
	nodefirst=nodeend=NULL;
	gsave=gfirst=0;
	login();
	readdata();
	menu();
	system("pause"); 
	return 0;
}
void readdata(void)
{
	FILE *fp;
	Node *node;
	if((fp=fopen("d:\\menu.txt","rab"))==NULL)
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
			nodeend->next=node;
			nodeend=node;
		}
		nodeend->next=NULL;
	}
	gfirst=0;
	fclose(fp);
}
void menu()
{
	char choice;
	system("cls");
	
	do{
		printf("\tNBA���ǹ���ϵͳ\n");
		bound('_',30);
		printf("\t1.����������Ϣ\n");
		printf("\t2.��ѯ������Ϣ\n");
		printf("\t3.��ʾ������Ϣ\n");
		printf("\t4.�޸�������Ϣ\n");
		printf("\t5.ɾ��������Ϣ\n");
		printf("\t6.ͳ��������Ŀ\n");
		printf("\t7.����ϵͳ����\n");
		printf("\t8.�˳�ϵͳ\n");
		bound('_',30);
		printf("\n��ѡ��˵���");
		
		do{
			fflush(stdin);
			choice=getchar();
			getchar();
			system("cls");
			
			switch(choice)
			{
				case '1':
					add();
					break;
				case '2':
					if(gfirst)
					{
						printf("ϵͳ�л�û��������Ϣ���������������Ϣ��\n");
						break;
					}
					find();
					break;
				case '3':
					if(gfirst)
					{
						printf("ϵͳ�л�û��������Ϣ���������������Ϣ��\n");
						break;
					}
					list();
					break;
				case '4':
					if(gfirst)
					{
						printf("ϵͳ�л�û��������Ϣ���������������Ϣ��\n");
						break;
					}
					change();
					break;
				case '5':
					if(gfirst)
					{
						printf("ϵͳ�л�û��������Ϣ���������������Ϣ��\n");
						break;
					}
					del();
					break;
				case '6':
					if(gfirst)
					{
						printf("ϵͳ�л�û��������Ϣ���������������Ϣ��\n");
						break;
					}
					sum();
					break;
				case '7':
					repassword();
					break;
				case '8':
					savedata();
					exit(0);
			}
		}while(choice<'0'||choice>'8');
		getchar(); 
		system("cls");
	}while(1);
}

void bound(char ch,int n)
{
	while(n--)
		putchar(ch);
	printf("\n");
	return;
}

void savedata()
{
	FILE *fp;
	Node *node;
	if(gsave==0)
	{
		return;
	}
	if((fp=fopen("d:\\menu.txt","wb"))==NULL)
	{
		printf("��menu�ļ�����!\n");
		return;
	}
	node=nodefirst;
	while(node)
	{
		fwrite(node,sizeof(Node),1,fp);
		node=node->next;
	}
	gsave=0;
	fclose(fp); 
}

void add()
{
	FILE *fp;
	Node *node;
	int i=0;
	char choice='y';
	if((fp=fopen("d:\\menu.txt","ab"))==NULL)
	{
		printf("���ļ�menu����\n");
		return;
	}
	do{
		i++;
		node=(Node *)malloc(sizeof(Node));
		if(node==NULL)
		{
			printf("�����ڴ�ʧ��");
			return;
		}
		printf("�������%d�����ǵ���Ϣ:\n",i);
		bound('_',20);
		
		printf("������");
		scanf("%s",&node->name);
		
		printf("���(cm)��");
		scanf("%d",&node->height);
		
		printf("�򼼣��ӵ͵��߷ֱ�Ϊ��grabage��medium��good��great��nice����");
		scanf("%s",&node->qiuji);
		
		printf("���±�ţ�");
		scanf("%d",&node->num);
		
		printf("���䣺");
		scanf("%d",&node->age);
		
		node->next=NULL;
		if(nodefirst==NULL)
		{
			nodefirst=node;
			nodeend=node;
		}
		else
		{
			nodeend->next=node;
			nodeend=node;
		}
		fwrite(nodeend,sizeof(Node),1,fp);
		gfirst=0;
		printf("\n");
		bound('_',20);
		printf("\n�Ƿ��������(y/n)?");
		fflush(stdin);
		choice=getchar();
		
		if(toupper(choice)!='Y')
		{
			fclose(fp);
			printf("\n������ϣ������������\n");
			return;
		}
		system("cls");
	}while(1);
}

void find()
{
	int choice,ret=0,a,b,c;
	char str[13];
	Node *node;
	
	system("cls");
	
	do{
		printf("\t��ѯ������Ϣ\n");
		bound('_',25);
		printf("\t1.��������ѯ\n");
		printf("\t2.����߲�ѯ\n");
		printf("\t3.�����±�Ų�ѯ\n");
		printf("\t4.�������ѯ\n");
		printf("\t5.�������˵�\n");
		bound('_',25);
		printf("\n��ѡ��˵���");
		
		do{
			fflush(stdin);
			choice=getchar();
			getchar();
			system("cls");
			
			switch(choice)
			{
				case '1':
					printf("\n������Ҫ��ѯ���ǵ�������");
					scanf("%s",str);
					node=findname(str);
					displaynode(node);
					break;
				
				case '2':
					printf("\n������Ҫ��ѯ���ǵ���ߣ�");
					scanf("%d",&a);
					node=findheight(a);
					itoa(a,str,3);
					displaynode(node);
					break;
				case '3':
					printf("\n������Ҫ��ѯ���ǵ����±�ţ�");
					scanf("%d",&b);
					node=findnum(b);
					itoa(b,str,3);
					displaynode(node);
					break;
				case '4':
					printf("\n������Ҫ��ѯ���ǵ����䣺");
					scanf("%d",&c);
					node=findage(c);
					itoa(c,str,3);
					displaynode(node);
					break;
				case '5':
					ret=1;
					break;
			}
		}while(choice<'0'||choice>'5');
		getchar();
		system("cls");
		if(ret)
		{
			break;
		}
	}while(1);
}

Node *findname(char *name)
{
	Node *node;
	node=nodefirst;
	while(node)
	{
		if(strcmp(name,node->name)==0)
		{
			return node;
		}
		node=node->next;
	}
	return NULL;
}

Node *findheight(int height)
{
	Node *node;
	node=nodefirst;
	while(node)
	{
		if(height==node->height)
		{
			return node;
		}
		node=node->next;
	}
	return NULL;
}

Node *findnum(int num)
{
	Node *node;
	node=nodefirst;
	while(node)
	{
		if(num==node->num)
		{
			return node;
		}
		node=node->next;
	}
	return NULL;
}

Node *findage(int age)
{
	Node *node;
	node=nodefirst;
	while(node)
	{
		if(age==node->age)
		{
			return node;
		}
		node=node->next;
	}
	return NULL;
}

void displaynode(Node *node)
{
	if(node)
	{
		printf("\n������Ϣ����:\n");
		bound('_',20);
		printf("������%s\n",node->name);
		printf("��ߣ�%d\n",node->height);
		printf("�򼼣�%s\n",node->qiuji);
		printf("���±�ţ�%d\n",node->num);
		printf("���䣺%d\n",node->age);
		bound('_',20); 
	}
	else
	{
		bound('_',40);
		printf("ϵͳ��û��������Ϣ��\n");
	}
	getchar();
	return;
}

void list()
{
	Node *node;
	printf("\nԱ���б�\n");
	bound('_',25);
	node=nodefirst;
	
	while(node)
	{
		printf("������%s\n",node->name);
		printf("��ߣ�%d\n",node->height);
		printf("�򼼣�%s\n",node->qiuji);
		printf("���±�ţ�%d\n",node->num);
		printf("���䣺%d\n",node->age);
		bound('_',25);
		node=node->next;
	}
	printf("\n�����������\n");
	return;
}

void change()
{
	Node *node;
	char name[10],str[10];
	int choice,A,B,C;
	printf("\n������Ҫ�޸����ǵ�����");
	scanf("%s",&name);
	
	node=findname(name);
	displaynode(node);
	
	if(node)
	{
		printf("\nѡ��Ҫ�޸ĵ���Ŀ��\n");
		bound('_',35);
		printf("  1.�޸����\n");
		printf("  2.�޸���\n");
		printf("  3.�޸����±��\n");
		printf("  4.�޸�����\n");
		printf("  5.����\n");
		bound('_',35);
		printf("��ѡ��");
		do{
			fflush(stdin);
			choice=getchar();
			switch(choice)
			{
				case '1':
					printf("\t\t\t�������µ��������\n");
					scanf("%d",&A);
					node->height=A;
					break;
				case '2':
					printf("\t\t\t�������µ�������\n");
					scanf("%s",str);
					strcpy(node->qiuji,str);
					break;
				case '3':
					printf("\t\t\t�������µ����±��\n");
					scanf("%d",&B);
					node->num=B;
					break;
				case '4':
					printf("\t\t\t�������µ���������\n");
					scanf("%d",&C);
					node->age=C;
					break;
				case '5':
					return;
			}
		} while(choice<'0'||choice>'5');
		gsave=1;
		savedata();
		printf("\n�޸����,����������ء�\n");
	}
	return;
}

void del()
{
	int i=0,find=0;
	Node *node1,*node2;
	char name[10],choice;
	
	system("cls");
	printf("\n����Ҫɾ�����ǵ�����:");
	scanf("%s",name);
	
	node1=nodefirst;
	node2=node1;
	while(node1)
	{
		if(strcmp(node1->name,name)==0)
		{
			find=1;
			system("cls");
			printf("���ǣ�%s ��Ϣ���£�\n",node1->name);
			bound('_',25);
			printf("��ߣ�%d\n",node1->height);
			printf("�򼼣�%s\n",node1->qiuji);
			printf("���±�ţ�%d\n",node1->num);
			printf("���䣺%d\n",node1->age);
			bound('_',25);
			printf("���Ҫɾ�������ǵ���Ϣô��(y/n)");
			
			fflush(stdin);
			choice=getchar();
			if(choice!='y'&&choice!='Y')
			{
				return;
			}
			if(node1==nodefirst)
			{
				nodefirst=node1->next;
			}
			else
			{
				node2->next=node1->next; 
			}
			free(node1);
			gsave=1;
			savedata();
			return;
		}
		else
		{
			node2=node1;
			node1=node1->next; 
		}
	}
	if(!find)
	{
		bound('_',30);
		printf("δ�ҵ������ǵ���Ϣ\n");
	}
	return;
}

void sum()
{
	Node *node;
	int a=0;
	
	node=nodefirst;
	while(node)
	{
		a++;
		node=node->next;
	}
	printf("���ǵ�������Ϊ%d",a);
	printf("����������أ�\n");
	return;
}

void login()
{
	FILE *fp;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
    int i = 3,j;
    char input[20] = { 0 };
    while (i)
    {
        printf("��������ĵ�¼����: ");
        scanf("%s", input);
        if (!strcmp(str, input))
        {
            j=0;
            break; 
        }
        else
        {
            i--;
            printf("��������ʣ���������Ϊ%d\n",i);
        }
    }
    if (i == 0)
    {
        j=-1;
    }
    if (j == 0)
    {
        printf("��¼�ɹ���\n");
    }
    else if (j == -1)
    {
        printf("��������Ѿ��þ���ϵͳ���Զ��˳���\n");
        exit(1);
    }
}

void repassword()
{
	FILE *fp,*fp1;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
	fclose(fp);
	char input[20]={0};
	char a[20]={0};
	char b[20]={0};
	printf("����������룺");
	scanf("%s",input);
	if(!(strcmp(input,str)))
	{
		printf("�����������룺");
		scanf("%s",a);
		printf("���ٴ����������룺");
		scanf("%s",b);
		if(!(strcmp(a,b)))
		{
			fp1=fopen("d:\\password.txt","wb");
			fprintf(fp,"%s",a);
			fclose(fp1);
			printf("�����޸ĳɹ���");
			return;
		}
	}
	else
	{
		printf("ԭ�����������������Զ��˳�����");
		Sleep(5000);
		exit(1);
	}
}
















 
