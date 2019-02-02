#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

typedef struct star
{
	char name[10];//姓名
	int height;//身高 
	char qiuji[4];//球技 
	int num;//球衣编号 
	int age;//球龄 
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
void readdata(void);//从文件中获取人物信息，创建链表 
void savedata(void);//将链表中的数据保存到文件中
Node *findname(char *name);
Node *findxingzuo(char *xingzuo);
Node *findnum(char *num);
void displaynode(Node *node,char *field,char *name);
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
	return 0;
}
void readdata(void)
{
	FILE *fp;
	Node *node;
	if((fp=fopen("d:\\menu.txt","rb"))==NULL)
	{
		gfirst=1;
		return;
	}
	while(!feof(fp))
	{
		node=(Node *)malloc(sizeof(Node));
		if(node==NULL)
		{
			printf("分配内存失败");
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
void menu()
{
	char choice;
	system("cls");
	
	do{
		printf("\tNBA球星管理系统\n");
		bound('_',30);
		printf("\t1.输入球星信息\n");
		printf("\t2.查询球星信息\n");
		printf("\t3.显示球星信息\n");
		printf("\t4.修改球星信息\n");
		printf("\t5.删除球星信息\n");
		printf("\t6.统计球星信息\n");
		printf("\t7.重设系统密码\n");
		printf("\t8.退出系统\n");
		bound('_',30);
		printf("\n请选择菜单：");
		
		do{
			fflush(stdin);
			choice=getchar();
			system("cls");
			
			switch(choice)
			{
				case '1':
					add();
					break;
				case '2':
					if(gfirst)
					{
						printf("系统中还没有球星信息，请先添加球星信息！\n");
						break;
					}
					find();
					break;
				case '3':
					if(gfirst)
					{
						printf("系统中还没有球星信息，请先添加球星信息！\n");
						break;
					}
					list();
					break;
				case '4':
					if(gfirst)
					{
						printf("系统中还没有球星信息，请先添加球星信息！\n");
						break;
					}
					change();
					break;
				case '5':
					if(gfirst)
					{
						printf("系统中还没有球星信息，请先添加球星信息！\n");
						break;
					}
					del();
					break;
				case '6':
					if(gfirst)
					{
						printf("系统中还没有球星信息，请先添加球星信息！\n");
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
		printf("打开menu文件错误!\n");
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
		printf("打开文件menu错误！\n");
		return;
	}
	do{
		i++;
		node=(Node *)malloc(sizeof(Node));
		if(node==NULL)
		{
			printf("分配内存失败");
			return;
		}
		printf("请输入第%d个球星的信息:\n",i);
		bound('_',20);
		
		printf("姓名：");
		scanf("%s",&node->name);
		
		printf("身高(cm)：");
		scanf("%d",&node->height);
		
		printf("球技（从低到高分别为：grabage、medium、good、great、nice）：");
		scanf("%s",&node->qiuji);
		
		printf("球衣编号：");
		scanf("%d",&node->num);
		
		printf("球龄：");
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
		printf("\n是否继续输入(y/n)?");
		fflush(stdin);
		choice=getchar();
		
		if(toupper(choice)!='Y')
		{
			fclose(fp);
			printf("\n输入完毕，按任意键返回\n");
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
		printf("\t查询球星信息\n");
		bound('_',25);
		printf("\t1.按姓名查询\n");
		printf("\t2.按身高查询\n");
		printf("\t3.按球衣编号查询\n");
		printf("\t4.按球龄查询\n");
		printf("\t5.返回主菜单\n");
		bound('_',25);
		printf("\n请选择菜单：");
		
		do{
			fflush(stdin);
			choice=getchar();
			system("cls");
			
			switch(choice)
			{
				case '1':
					printf("\n请输入要查询球星的姓名：");
					scanf("%s",str);
					node=findname(str);
					displaynode(node,"姓名",str);
					break;
				
				case '2':
					printf("\n请输入要查询球星的身高：");
					scanf("%d",&a);
					node=findheight(a);
					itoa(a,str,3);
					displaynode(node,"身高",str);
					break;
				case '3':
					printf("\n请输入要查询球星的球衣编号：");
					sacnf("%d",&b);
					node=findnum(b);
					itoa(b,str,3);
					displaynode(node,"球衣编号",str);
					break;
				case '4':
					printf("\n请输入要查询球星的球龄：");
					sacnf("%d",&c);
					node=findage(c);
					itoa(c,str,3);
					displaynode(node,"球龄",c);
					break;
				case '5':
					ret=1;
					break;
			}
		}while(choice<'0'||choice>'5');
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
        printf("请输入你的登录密码:");
        scanf("%s", input);
        if (!strcmp(str, input))
        {
            j=0;
            break; 
        }
        else
        {
            i--;
            printf("输入有误，剩余输入次数为%d\n",i);
        }
    }
    if (i == 0)
    {
        j=-1;
    }
    if (j == 0)
    {
        printf("登录成功！\n");
 
    }
    else if (j == -1)
    {
        printf("输入次数已经用尽，系统将自动退出！\n");
    }
}

void repassword()
{
	FILE *fp,*fp1;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
	char input[20]={0};
	char a[20]={0};
	char b[20]={0};
	printf("请输入旧密码：");
	scanf("%s",&input);
	if(!(strcmp(input,str))) 
	{
		printf("请输入新密码：");
		scanf("%s",&a);
		printf("请再次输入新密码：");
		scanf("%s",&b);
		if(!(strcmp(a,b)))
		{
			fp1=fopen("d:\\password.txt","wb");
			int i=0;
			while(a[i])
			{
				putw(a[i],fp1);
				i++;
			}
			fclose(fp1);
			printf("密码修改成功！");
			return;
		}
	}
	else
	{
		printf("原密码输入错误，五秒后将自动退出程序");
		Sleep(5000);
		exit(1);
	}
}
















 
