//用户说明！！！ 
/*本系统为小区水费管理系统
主要为小区管理员，用户提供水费查询
其功能如下：
用户端：
1：用户名由管理员统一下发，初始密码为123456 
2：查询某月用水量，并输出所产生的水费。 
3：显示本年各月份用水量和水费。  
注：水费会详细指出超出限制的用水量和产生的水费 
这里每月用户用水量不超过12吨每吨0.8元，超过的部分按每吨1.8元。
管理员端：
1：查询某一用户某一个月的用水量和水费。 
2：查询某一单元中各个用户的某一个月的用水量和水费。
3：更改某一用户某一个月的用水量并自动更改水费。
4：增加某用户一个月的用水量。 
5：删除某用户一个月的用水量。 */
/*
本程序在外部一共写入了3个txt文件，分别为：
userpassword.txt    用户的账户密码 
managerpassword.txt     管理员的账户密码（唯一）
userdata.txt      储存所有用户的水量 
*/
#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
#include<string.h>
#include<time.h>
typedef struct teacher  //用户的信息链表 
{
	int lnumber; //楼号 
	int dnumber; //单元号 
	int hnumber; //户号 
	int month;  //月份 
	int water;  //水量 
	float cost;  //花费 
	struct teacher *next;
}dog,*cat;
typedef struct teachers //系统所有的用户密码链表 
{
	char min[20];
	char max[20];
	struct teachers *next1;
}man,*woman;
int A=2;
int B=4;  //这三个全局变量是用于随机生成用户信息中 
int C=2;
cat g;
void sm(); 
void mainmenu();
void usermenu();
void managermenu();
cat create();
void output(cat h);
void display();
void news();
void readdata();
void usearch();
void usort();
void msearch1();
void msearch2();
void modify();
void savedata(cat h);
void madd();
void mdelete(); 
void managerrepassword();
void userlogin();
void day();
void stu43();
int l=1;
char users[6];
void mdelete() 
{
	cat m;
	cat h;
	dog* p;
	dog* r;
	dog* q;
	int a,b,c,n,y;
	printf("				   请输入要删除的用户(几楼，几单，几户)\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d %d %d",&a,&b,&c);
	printf("				   请输入要删除的月份\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&y);
	readdata();
	m=g;
	p=m->next;
	r=m;
	while(p!=NULL)
	{
		if(p->lnumber==a&&p->dnumber==b&&p->hnumber==c&&p->month==y)
		{
		    r->next=p->next;
		    free(p);
			break;
		} 
     	p=p->next;
     	r=r->next;
	}
	savedata(m);
	printf("\t\t\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	managermenu();		
}
void madd()
{
	cat m;
	cat h;
	dog* p;
	dog* r;
	dog* q;
	int a,b,c,n,y;
	printf("\t\t\t请输入要增加的用户(几楼，几单，几户)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t请输入要增加的月份\n");
	printf("\t\t\t");
	scanf("%d",&y);
	readdata();//g拿到链表遍历文件的头结点地址 
	m=g;
	r=m->next;
	p=m;
	while(r!=NULL)
	{
	r=r->next;
	p=p->next;
	}
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c)
		{
			h=(cat)malloc(sizeof(dog));
			printf("\t\t\t请输入要增加的用水量\n");
			printf("\t\t\t");
			scanf("%d",&n);
			h->lnumber=m->lnumber;
			h->dnumber=m->dnumber;
			h->hnumber=m->hnumber;
			h->month=y; 
			h->water=n;
			if(h->water<=12)
		    {
			h->cost=h->water*0.8;
		    } 
		    if(h->water>12)
		    {
		 	h->cost=12*0.8+(h->water-12)*1.8;
		    }
		    h->next=NULL;
		    p->next=h;
			printf("第%d楼，第%d单，第%d户\n本月用水量为：%d\n水费为：%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	savedata(g);
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	managermenu();		
}
void modify()
{
	cat m;
	int a,b,c,n,y;
	printf("				   请输入要查询的用户(几楼，几单，几户)\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d %d %d",&a,&b,&c);
	printf("				   请输入要更改的月份\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&y);
	readdata();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("				   请输入要更改的用水量\n");
			printf("\n\t\t\t\t   ----→  ");
			scanf("%d",&n);
			m->water=n;
			if(m->water<=12)
		    {
				m->cost=m->water*0.8;
		    } 
		    if(m->water>12)
		    {
		 	m->cost=12*0.8+(m->water-12)*1.8;
		    }
		    printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\t\t\t\t\t第%d楼，第%d单,第%d户\n\t\t\t\t\t第%d月用水量为：%d吨\n\t\t\t\t\t水费为：%1.1f元\n",m->lnumber,m->dnumber,m->hnumber,m->month,m->water,m->cost);
			printf("\n");
			printf("\t\t\t\t======================================================\n");
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	savedata(g);
	printf("\t\t\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	managermenu();		
}
void msearch2()
{
	cat m;
	int a,b,y;
	printf("				   请输入要查询的用户(几楼，几单)\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d %d",&a,&b);
	printf("				   请输入要查询的月份\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&y);
	readdata();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->month==y)
		{
			printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\t\t\t\t\t第%d楼，第%d单,第%d户\n\t\t\t\t\t第%d月用水量为：%d吨\n\t\t\t\t\t水费为：%1.1f元\n",m->lnumber,m->dnumber,m->hnumber,m->month,m->water,m->cost);
			printf("\n");
			printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\n");
		}
		m=m->next;
	}
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	managermenu();		
}
void msearch1()
{
	cat m;
	int a,b,c,y;
	printf("				   请输入要查询的用户(几楼，几单，几户)\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d %d %d",&a,&b,&c);
	printf("				   请输入要查询的月份\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&y);
	readdata();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\t\t\t\t\t第%d楼，第%d单，第%d户\n\t\t\t\t\t本月用水量为：%d吨\n\t\t\t\t\t水费为：%1.1f元\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			printf("\n");
			printf("\t\t\t\t======================================================\n");
			break;
		}
		else
		m=m->next;
	}
	printf("\t\t\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	managermenu();		
}
void usort()
{
	cat m;
	cat h;
    dog* r;
    dog* bang;
    dog* p;
	dog* q;
    int e1;
    int e2; 
    int e3;
    int e4;
    int e5;
    float e6;
	readdata();
	m=g;
	h=(cat)malloc(sizeof(dog));
    h->next=NULL;
    r=h; 
	while(m!=NULL)
	{
		if(m->lnumber==(users[0]-48)&&m->dnumber==(users[2]-48)&&m->hnumber==(users[4]-48))
		{
			bang=(dog*)malloc(sizeof(dog));
	        bang->next=r->next;
			//printf("\t\t\t您本年第%d月用水量为：%d\n\t\t\t水费为：%1.1f\n",m->month,m->water,m->cost);
			bang->lnumber=m->lnumber;
			bang->dnumber=m->dnumber;
			bang->hnumber=m->hnumber;
			bang->month=m->month;
			bang->water=m->water;
			bang->cost=m->cost;
			r->next=bang;
	        r=bang;
		}
		m=m->next;
	}
    p=h->next;
    q=p->next;
    while(p!=NULL)
    {
    	q=p->next;
		while(q!=NULL)
		{
			if(p->cost>q->cost)
			{
		   		e1=p->lnumber;
 				e2=p->dnumber;
 				e3=p->hnumber;
 				e4=p->month;
 				e5=p->water;
 				e6=p->cost;
 				p->lnumber=q->lnumber;
 				p->dnumber=q->dnumber;
 				p->hnumber=q->hnumber;
 				p->month=q->month;
 				p->water=q->water;
 		    	p->cost=q->cost;
 				q->lnumber=e1;
 				q->dnumber=e2;
 				q->hnumber=e3;
 				q->month=e4;
 				q->water=e5;
 				q->cost=e6;
			}
			q=q->next;
   		}
   		p=p->next;
    }
    output(h);
    printf("\t\t\t按任意键返回上一级\n");
	getch(); 
	system("cls");
	usermenu();		
}
void usearch()
{
	cat m;
	int y;
	printf("				     请输入要查询的月份\n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&y);
	readdata();
	m=g; 
	while(m!=NULL)
	{
		if(m->lnumber==(users[0]-48)&&m->dnumber==(users[2]-48)&&m->hnumber==(users[4]-48)&&m->month==y)
		{
			printf("\t\t======================================================\n");
			printf("\t\t\t\t您好，您本月用水量为：%d吨\n\t\t\t\t水费为：%1.1f元\n",m->water,m->cost);
			printf("\t\t======================================================\n");
			break;
		}
		else
		m=m->next;
	}
	if(m==NULL)
	{
		printf("\t\t\t抱歉无此月水费\n");
	}
	printf("\t\t\t\t按任意键返回上一级\n");
    getch(); 
    system("cls");
    usermenu();			
}
void readdata()/*用户端读取文件*/ 
{
	cat h;
	FILE *fp;
	dog* bang;
    dog* r;
    fp=fopen("F:/userdata.txt","r");
	h=(cat)malloc(sizeof(dog));
    h->next=NULL;
    r=h;
	bang=(dog*)malloc(sizeof(dog));
	bang->next=r->next;
	while((fread(bang,sizeof(dog),1,fp))==1)
	{
		r->next=bang;
	    r=bang;
	    bang=(dog*)malloc(sizeof(dog));
	    bang->next=r->next;
   } 
   fclose(fp);
   g=h;
}
void news()//随机信息生成函数 
{
    FILE *fp;
    int x,y;
    int i,j,k;
    cat h;
    dog* bang;
    dog* r;
    fp=fopen("F:/userdata.txt","r");
    printf("\t\t\t请输入校验码\n"); 
    printf("\t\t\t");
    scanf("%d",&y);
    if(fp==NULL)
    {
	    if(y==1)
		{
			g=create();//如果为第一次随机生成，则先开始在文件里创建链表信息 
		}
    }
    else//如果链表中已有用户信息，则先进行读取信息，再将之后的信息追加到临时链表后面 
    {
    	if(y==1)
    	{
			h=(cat)malloc(sizeof(dog));
    		h->next=NULL;
    		r=h;
		bang=(dog*)malloc(sizeof(dog));
		bang->next=r->next;
		while((fread(bang,sizeof(dog),1,fp))==1)
		{
			r->next=bang;
	    	r=bang;
	    	bang=(dog*)malloc(sizeof(dog));
	    	bang->next=r->next;
   		} 
		fclose(fp);
   		l=r->month+1;
   		fp=fopen("F:/userdata.txt","a+");
   		printf("\t\t\t是否对为整体用户随机生成一个月的水量（1/0）\n");
   		srand((unsigned)(time(NULL)));
   		printf("\t\t\t");
   		scanf("%d",&x); 
		while(x!=0)
		{
			for(k=1;k<=A;k++)
			{
	   			for(j=1;j<=B;j++)
	   			{
	   				for(i=1;i<=C;i++)
	   				{
					   bang=(dog*)malloc(sizeof(dog));
					   bang->next=r->next;
					   bang->lnumber=k;
					   bang->dnumber=j;
					   bang->hnumber=i;
					   bang->month=l; 
					   bang->water=rand()%(20-1)+1;//随机生成 
					   if(bang->water<=12)
						{
						bang->cost=bang->water*0.8;
		 				} 
		 				if(bang->water>12)
		 				{
						 	bang->cost=12*0.8+(bang->water-12)*1.8;
						}
					    r->next=bang;
					    r=bang;
					    fwrite(bang,sizeof(dog),1,fp);
					} 
   				} 
  			}
    		l=l+1;
    		printf("\t\t\t再次对为整体用户随机生成一个月的水量（1/0）？\n");
    		printf("\t\t\t");
    		scanf("%d",&x);   
  			}
	//system("cls");
 		}
	}
    fclose(fp);
    g=h;
    printf("\t\t\t按任意键返回\n");
	getch(); 
    system("cls");
	mainmenu();		
}
cat create()//第一次随机信息生成函数 
{
	cat h;
	FILE *fp;
	dog* bang;
	dog* r;
	int i,j,k,x;
	h=(cat)malloc(sizeof(dog));
	h->next=NULL;
	r=h;
	fp=fopen("F:/userdata.txt","w+");
	srand((unsigned)(time(NULL)));
	printf("\t\t\t是否对为整体用户随机生成一个月的水量（1/0）\n");
	printf("\t\t\t");
    scanf("%d",&x);
	while(x!=0)
	{
		for(k=1;k<=A;k++)
		{
	 		for(j=1;j<=B;j++)
	  			{
	   				for(i=1;i<=C;i++)
	   				{
					   bang=(dog*)malloc(sizeof(dog));
					   bang->next=r->next;
					   bang->lnumber=k;
					   bang->dnumber=j;
					   bang->hnumber=i;
					   bang->month=l; 
					   bang->water=rand()%(20-1)+1;
					   if(bang->water<=12)
						{
							bang->cost=bang->water*0.8;
						 } 
						 if(bang->water>12)
						 {
						 	bang->cost=12*0.8+(bang->water-12)*1.8;
						 }
					   fwrite(bang,sizeof(dog),1,fp);
					   r->next=bang;
					   r=bang;
      				}
    			} 
  		}  
    	printf("\t\t\t再次对为整体用户随机生成一个月的水量（1/0）？\n");
    	printf("\t\t\t");
   		scanf("%d",&x);
   		l=l+1; 
 	}
	fclose(fp);
	return h;
}
void output(cat h)
{
	dog *a;
	a=h->next;
	printf("\t\t\t--------------------------------------------------------\n");
	printf("\t\t\t|楼号   单元号   户号   月份   用水量（吨）   水费（元）|\n"); 
	while(a!=NULL)
	{
		printf("\t\t\t|  %d\t  %d\t  %d\t %d\t   %d\t       %-6.1lf   |\n",a->lnumber,a->dnumber,a->hnumber,a->month,a->water,a->cost);
		a=a->next;
	}
	printf("\t\t\t--------------------------------------------------------\n");
}
void savedata(cat h)/*写文件*/ 
{
	FILE *fp;
	h=h->next;
	fp=fopen("F:/userdata.txt","w+");
	while(h!=NULL)
	{
	   fwrite(h,sizeof(dog),1,fp);
	   h=h->next; 
	}
    fclose(fp);
}
void display()
{
	readdata(); 
	output(g); 
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	managermenu();		
}
void mainmenu()
{
	int a;
	printf("\t\t======================================================");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("				      1.用户登录\n");
	printf("				      2.管理员登录\n");
	printf("				      3.系统使用说明\n");
	printf("				      4.退出系统\n");
	printf("\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\t\t\t      请选择 | 1 | 2 | 3 | 4 | \n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:userlogin();break;
		case 2:managerrepassword();break;
		case 3://news();
			sm();
			break;
		case 4:printf("\t\t\t已退出"); exit(1); break;
		default:printf("\t\t\t没有此客户端\n");
	}
}

void sm()
{
	printf("\t\t\t\t\t     使用说明！！！\n");
	printf("\t\t\t-----------------------------------------------------------\n");
	printf("\t\t\t| 本系统为小区水费管理系统                                |\n");
	printf("\t\t\t| 主要为小区管理员，用户提供水费查询                      |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| 一.用户登录说明：                                       |\n");
	printf("\t\t\t| 用户名由管理员统一下发，初始密码为123456	          |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| 二.用户功能说明：                                       |\n");
	printf("\t\t\t| 1.查询某月用水量，并显示所产生的水费。                  |\n");		
	printf("\t\t\t| 2.本年各月份用水量和水费统计图                          |\n");			
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| 三.管理员登录说明：                                     |\n");
	printf("\t\t\t| 管理的密码仅由内部人员可知，用户不可使用该功能          |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| 四.管理员功能说明：                                     |\n");
	printf("\t\t\t| 1：查询某一用户某一个月的用水量和水费。                 |\n");			
	printf("\t\t\t| 2：查询某一单元中各个用户的某一个月的用水量和水费。     |\n");
	printf("\t\t\t| 3：更改某一用户某一个月的用水量并自动更改水费。         |\n");
	printf("\t\t\t| 4：增加某用户一个月的用水量。                           |\n");
	printf("\t\t\t| 5：删除某用户一个月的用水量。                           |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| 五.水费使用说明                                         |\n");
	printf("\t\t\t| 用水量不超过12吨每吨0.8元，超过的部分按每吨1.8元计算    |\n");
	printf("\t\t\t-----------------------------------------------------------\n");
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
	system("cls");
	mainmenu();	
} 


void usermenu()
{
	int a;
		printf("\t\t======================================================");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t  1.查询某月用水量，并查看所产生的水费。\n");
	printf("\t\t\t  2.显示并排序本年各月份用水量和水费。\n");
	printf("\t\t\t  3.返回主菜单。\n");
	printf("\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\t\t\t      请选择 | 1 | 2 | 3 | \n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:usearch();break;
		case 2:usort();break;
		case 3:mainmenu();break;
		default:printf("\t\t\t没有此功能\n");
	}
	printf("\t\t\t按任意键返回上一级\n");
	 getch(); 
	 system("cls");
	 usermenu();		
 } 
void managermenu()
{
	int b;
	printf("\t\t\t======================================================");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t  1：查询某一用户某一个月的用水量和水费。\n");
	printf("\t\t\t  2：查询某一单元中各个用户的某一个月的用水量和水费。\n");
	printf("\t\t\t  3：更改某一用户的用水量并自动更改水费。\n");
	printf("\t\t\t  4：增加某用户一个月的用水量。\n");
	printf("\t\t\t  5：删除某用户一个月的用水量。\n");
	printf("\t\t\t  6：显示所有用户各月用水量和水费\n");
	printf("\t\t\t  7：返回主页面\n");	
	printf("\n");
	printf("\n");
	printf("\t\t\t======================================================");
	printf("\n");
	printf("\t\t\t      请选择 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | \n");
	printf("\n\t\t\t\t   ----→  ");
	scanf("%d",&b);
	system("cls");
	switch(b)
	{
		case 1:msearch1();break;
		case 2:msearch2();break;
		case 3:modify();break;
		case 4:madd();break;
		case 5:mdelete();break; 
		case 6:display();break;
		case 7:mainmenu();break;
	}
		printf("\t\t\t按任意键返回上一级\n");
	 getch(); 
	 system("cls");
	 managermenu();				
}	 
void userlogin()
{
	char i[20],j[20],fa[20],fa1[20],t[20],w[20];
	int m,n,k,s=0;
	int x;
	char c;
    woman h;
    FILE *fp;
    man* bang;
    man* r;
    man* q;
	fp=fopen("F:/userpassword.txt","r");
	h=(woman)malloc(sizeof(man));
    h->next1=NULL;
    r=h;
	bang=(woman)malloc(sizeof(man));
	bang->next1=r->next1;
	while(fscanf(fp,"%s %s",bang->min,bang->max)!=EOF)
	{
		r->next1=bang;
	    r=bang;
	    bang=(woman)malloc(sizeof(man));
	    bang->next1=r->next1;
    }
    fclose(fp);
    q=h;
    printf("\t\t======================================================");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("				      1.用户登录\n");
	printf("				      2.修改密码\n");
	printf("\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\t\t\t      请选择 | 1 | 2 | \n");
	printf("\n\t\t\t\t   ----→  ");
    scanf("%d",&x);
    if(x==1)
    {
	   	printf("\t\t\t\t请输入用户名\n");
	   	printf("\t\t\t\t");
		scanf("%s",&i);
		printf("\t\t\t\t请输入密码\n");
		printf("\t\t\t\t");
		while((c=getch()) != '\r')
		{
			j[s] = c;
			s++;
			if(c!='\b')
				printf("*");
			else
				printf("\b \b");
		}
		printf("\n"); 
		s=0;
		while(s<5)
		{
			users[s]=i[s];
			s++;
		}	////登录测试 
			//scanf("%s",&j);
	    while(q!=NULL)
	    {
	   	if((strcmp(i,q->min))==0&&(strcmp(j,q->max))==0)
	   	{
	   		system("cls");
	   		usermenu();
	   		break;
		}
			q=q->next1;
	    }	
	    if(q==NULL)
	    {
		   	printf("\t\t\t用户名或密码输入错误\n");
	    }
		system("cls"); 
	}
   if(x==3)
    {
	   	printf("\t\t\t请输入用户名\n");
	   	printf("\t\t\t");
		scanf("%s",&i);
	   	while(q!=NULL)
	    {
	   	if((strcmp(i,q->min))==0)
	   	{
	   	   printf("\t\t\t此用户名已被注册\n");
	   	   break;
		}
		q=q->next1;
	    }
	    if(q==NULL)
	    {
		   	fp=fopen("F:/userpassword.txt","a+");
		   	printf("\t\t\t请输入密码\n");
		   	printf("\t\t\t");
		   	s = 0;
		   	while((c=getch()) != '\r')
			{
				j[s] = c;
				s++;
				if(c!='\b')
					printf("*");
				else
					printf("\b \b");
			}
			printf("\n");
		   	fputs(i,fp);
			fputc('\n',fp);
			fputs(j,fp);
			fputc('\n',fp);
			fclose(fp);
			printf("\t\t\t注册成功\n");
	   		}	
	} 
	if(x==2)
	{
		printf("\t\t\t请输入用户名\n");
		printf("\t\t\t");
		scanf("%s",&i);
		printf("\t\t\t请输入密码\n");
		printf("\t\t\t");
		s = 0;
		while((c=getch()) != '\r')
		{
			j[s] = c;
			s++;
			if(c!='\b')
				printf("*");
			else
				printf("\b \b");
		}
		printf("\n");
	    while(q!=NULL)
	    {
	   	if((strcmp(i,q->min))==0&&(strcmp(j,q->max))==0)
	   	{
	   		printf("\t\t\t请输入要修改的密码\n");
	   		printf("\t\t\t");
	   		scanf("%s",&q->max);
	   		break;
		}
		q=q->next1;
   }	
   if(q==NULL)
    {
   		printf("\t\t\t用户名或密码输入错误\n");
    }
	h=h->next1;
	fp=fopen("F:/userpassword.txt","w+");
	while(h!=NULL)
	{

	   fputs(h->min,fp);
	   fputc('\n',fp);
	   fputs(h->max,fp);
	   fputc('\n',fp);
	   h=h->next1; 
	}
  fclose(fp);
}
if(x!=3&&x!=2&&x!=1)
{
	printf("\t\t\t无此功能\n");
}
    printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	mainmenu();		
}
void managerrepassword()
{
	char w[6],t[6],j[6];
	int i,s = 0;
	FILE *fp;
	char fa[6];
	char c;
	printf("\t\t======================================================");
	printf("\n");
	printf("\n");
	printf("				    请输入管理员密码(6位)\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\n\t\t\t\t   ----→  "); 
	while((c=getch()) != '\r')
	{
		w[s] = c;
		s++;
		if(c!='\b')
			printf("*");
		else
			printf("\b \b");
	}
	printf("\n");
	fp=fopen("F:/managerpassword.txt","a+");
	fscanf(fp,"%s",t);
	fclose(fp);
	if((strcmp(w,t))==0)
	{
		system("cls");
		printf("\t\t======================================================");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("				  1.修改密码\n");
		printf("				  2.进入管理员端\n");
		printf("\n");
		printf("\n");
		printf("\t\t======================================================");
		printf("\n");
		printf("\t\t\t      请选择 | 1 | 2 | \n");
		printf("\n\t\t\t\t   ----→  ");
		scanf("%d",&i);
	    if(i==1)
	    {
	    	printf("\t\t\t请输入原密码\n");
	    	printf("\t\t\t");
	    	scanf("%s",&j);
	    	if((strcmp(t,j))==0)
	    	{
	    		printf("\t\t\t请输入新密码\n");
	    		{
	    			fp=fopen("F:/managerpassword.txt","w+");
	    			printf("\t\t\t");
	    			scanf("%s",&t);
	    			fputs(t,fp);
	                fclose(fp);
				}
			}
			else
			{
				printf("\t\t\t原密码错误\n");
			}
		}
		if(i==2)
		{
			system("cls");
			managermenu();
		}
		if(i!=1&&i!=2)
		{
			printf("\t\t\t无此功能\n");
		}
		if(i!=3&&i!=2&&i!=1)
      { 
	   printf("\t\t\t无此功能\n");
      }
	}
	else
	{
		printf("\t\t\t密码不正确\n");
	}
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	mainmenu();		
}

main()
{
	system("color F1");
	mainmenu();
} 
