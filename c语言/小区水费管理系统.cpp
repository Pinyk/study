/*本系统为小区水费管理系统
主要为小区管理员，用户提供水费查询
其功能如下：
用户端：
1：查询某月用水量，并输出所产生的水费。 
2：显示本年各月份用水量和水费。  
注：水费会详细指出超出限制的用水量和产生的水费 
这里每月用户用水量不超过12吨每吨0.8元，超过的部分按每吨1.8元。
管理员端：
1：查询某一用户某一个月的用水量和水费。 
2：查询某一单元中各个用户的某一个月的用水量和水费。
3：更改某一用户某一个月的用水量并自动更改水费。
4：增加某用户一个月的用水量。 
5：删除某用户一个月的用水量。 */
#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
#include<string.h>
#include<time.h>
int A=2;
int B=4;
int C=2;
typedef struct teacher
{
	int lnumber;
	int dnumber;
	int hnumber;
	int month;
	int water;
	float cost;
	struct teacher *next;
}dog,*cat;
typedef struct teachers
{
	char min[20];
	char max[20];
	struct teachers *next1;
}man,*woman;
cat g;
void stu1();
void stu11();
void stu12();
cat create();
void output(cat h);
void stu21();
void news();
void news1();
void stu22();
void stu23();
void stu31();
void stu32();
void stu33();
void deposit(cat h);
void stu34();
void stu35(); 
void stu42();
void stu51();
void day();
void stu43();
int l=1; 
/*void lation();
void lation(cat h)
{
	   dog *a;
	    int x;
		x=a->water;
		if(x<=12)
		{
			a->cost=x*0.8;
		 } 
		 if(x>12)
		 {
		 	a->cost=12*0.8+(x-12)*1.8;
		 }
}*/
void stu35()
{
	cat m;
	cat h;
	dog* p;
	dog* r;
	dog* q;
	int a,b,c,n,y;
	printf("\t\t\t请输入要删除的用户(几楼，几单，几户)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t请输入要删除的月份\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	p=m->next;
	r=m;
	while(p!=NULL)
	{
		if(p->lnumber==a&&p->dnumber==b&&p->hnumber==c&&p->month==y)
		{
		    r->next=p->next;
		    free(p);
			//printf("第%d楼，第%d单，第%d户\n本月用水量为：%d\n水费为：%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     
     	p=p->next;
     	r=r->next;
	 
	}
	deposit(m);
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu34()
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
	news1();
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
			//printf("第%d楼，第%d单，第%d户\n本月用水量为：%d\n水费为：%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	deposit(g);
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu33()
{
	cat m;
	int a,b,c,n,y;
	printf("\t\t\t请输入要更改的用户(几楼，几单，几户)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t请输入要更改的月份\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t请输入%d月份更改的用水量\n");
			printf("\t\t\t");
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
			printf("\t\t\t第%d楼，第%d单，第%d户\n\t\t\t本月用水量为：%d\n\t\t\t水费为：%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	deposit(g);
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu32()
{
	cat m;
	int a,b,y;
	printf("\t\t\t请输入要查询的信息(几楼，几单)\n");
	printf("\t\t\t");
	scanf("%d %d",&a,&b);
	printf("\t\t\t请输入要查询的月份\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->month==y)
		{
			printf("\t\t\t第%d楼，第%d单,第%d户\n\t\t\t第%d月用水量为：%d\n\t\t\t水费为：%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->month,m->water,m->cost);
		}
		m=m->next;
	}
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu31()
{
	cat m;
	int a,b,c,y;
	printf("\t\t\t请输入要查询的用户(几楼，几单，几户)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t请输入要查询的月份\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t第%d楼，第%d单，第%d户\n\t\t\t本月用水量为：%d\n\t\t\t水费为：%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
		else
		m=m->next;
	}
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu23()
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
	int a,b,c,y;
	printf("\t\t\t请输入要查询的用户(几楼，几单，几户)\n");
	printf("\t\t\t");
	scanf("\t\t\t%d %d %d",&a,&b,&c);
	//printf("请输入要查询的月份\n");
	//scanf("%d",&y);
	news1();
	m=g;
	h=(cat)malloc(sizeof(dog));
    h->next=NULL;
    r=h; 
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c)
		{
			bang=(dog*)malloc(sizeof(dog));
	        bang->next=r->next;
			printf("\t\t\t您本年第%d月用水量为：%d\n\t\t\t水费为：%1.1f\n",m->month,m->water,m->cost);
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
	stu11();		
}
void stu22()
{
	cat m;
	int a,b,c,y;
	printf("\t\t\t请输入要查询的用户(几楼，几单，几户)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t请输入要查询的月份\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t你好第%d楼，第%d单，第%d户\n\t\t\t您本月用水量为：%d\n\t\t\t水费为：%1.1f",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
		else
		m=m->next;
	}
	if(m==NULL)
	{
		printf("\t\t\t抱歉无此用户或无此月水费\n");
		}
		printf("\t\t\t按任意键返回上一级\n");
	    getch(); 
	    system("cls");
	    stu11();			
}
void news1()/*用户端读取文件*/ 
{
	cat h;
	FILE *fp;
	dog* bang;
    dog* r;
    fp=fopen("F:/zhangsan.txt","r");
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
void news()
{
    FILE *fp;
    int x,y;
    int i,j,k;
    cat h;
    dog* bang;
    dog* r;
    fp=fopen("F:/zhangsan.txt","r");
    printf("\t\t\t请输入激活数\n"); 
    printf("\t\t\t");
    scanf("%d",&y);
    if(fp==NULL)
    {
    if(y==1)
	{g=create();}
    }
    else
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
   fp=fopen("F:/zhangsan.txt","a+");
   printf("\t\t\t请输入唤醒数\n");
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
	   bang->water=rand()%(20-1)+1;
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
    printf("\t\t\t请输入唤醒数\n");
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
	stu1();		
}
cat create()
{
	cat h;
	FILE *fp;
	dog* bang;
	dog* r;
	int i,j,k,x;
	h=(cat)malloc(sizeof(dog));
	h->next=NULL;
	r=h;
	fp=fopen("F:/zhangsan.txt","w+");
	srand((unsigned)(time(NULL)));
	printf("\t\t\t请输入唤醒数\n");
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
    printf("\t\t\t请输入唤醒数\n");
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
	while(a!=NULL)
	{
		printf("\t\t\t第%d楼，第%d单元，第%d户，第%d月份用水量%d，水费为%1.1f\n",a->lnumber,a->dnumber,a->hnumber,a->month,a->water,a->cost);
		//printf("%d\n",a->water);
		a=a->next;
	}
}
void deposit(cat h)/*写文件*/ 
{
	FILE *fp;
	h=h->next;
	fp=fopen("F:/zhangsan.txt","w+");
	while(h!=NULL)
	{

	   fwrite(h,sizeof(dog),1,fp);
	   h=h->next; 
	}
  fclose(fp);
}
void stu21()
{
	news1();
	output(g);
	printf("\t\t\t按任意键返回上一级\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu1()
{
	int a;
	printf("\t\t-----------------------------------------\n");
	printf("\t\t\t欢迎使用小区水费管理系统\n");
	printf("\t\t\t请选择用户端还是管理员端\n");
	printf("\t\t\t输入1：用户端\n");
	printf("\t\t\t输入2：管理员端\n");
	printf("\t\t\t输入3：机器端\n");
	printf("\t\t\t输入0：退出程序\n");
	printf("\t\t\t");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:stu51();break;
		case 2:stu42();break;
		case 3:news();break;
		case 0:printf("\t\t\t退出程序\n"); break;
		default:printf("\t\t\t没有此客户端\n");
	}
	
}
void stu11()
{
	int a;
	printf("\t\t---------------------------------------------------------------------\n");
	printf("\t\t\t欢迎来到用户端\n");
	printf("\t\t\t功能1：查询某月用水量，并输出所产生的水费。\n");
	printf("\t\t\t功能2：显示并排序本年各月份用水量和水费。\n");
	printf("\t\t\t功能3：返回主菜单。\n");
	printf("\t\t\t");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:stu22();break;
		case 2:stu23();break;
		case 3:stu1();break;
		default:printf("\t\t\t没有此功能\n");
	}
	printf("\t\t\t按任意键返回上一级\n");
	 getch(); 
	 system("cls");
	 stu11();		
 } 
void stu12()
{
	int b;
	printf("\t\t---------------------------------------------------------------------\n");
	printf("\t\t\t欢迎来到管理员端\n");
	printf("\t\t\t功能1：查询某一用户某一个月的用水量和水费。\n");
	printf("\t\t\t功能2：查询某一单元中各个用户的某一个月的用水量和水费。\n");
	printf("\t\t\t功能3：更改某一用户的用水量并自动更改水费。\n");
	printf("\t\t\t功能4：增加某用户一个月的用水量。\n");
	printf("\t\t\t功能5：删除某用户一个月的用水量。\n");
	printf("\t\t\t功能6：显示所有用户各月用水量和水费\n");
	printf("\t\t\t功能7：返回主页面\n");
	printf("\t\t\t");
	scanf("%d",&b);
	system("cls");
	switch(b)
	{
		case 1:stu31();break;
		case 2:stu32();break;
		case 3:stu33();break;
		case 4:stu34();break;
		case 5:stu35();break; 
		case 6:stu21();break;
		case 7:stu1();break;
		}
		printf("\t\t\t按任意键返回上一级\n");
	 getch(); 
	 system("cls");
	 stu12();				
}	 
void stu51()
{
	char i[20],j[20],fa[20],fa1[20],t[20],w[20];
	int m,n,k;
	int x;
    woman h;
    FILE *fp;
    man* bang;
    man* r;
    man* q;
    /*printf("原始用户登陆\n");
	fp=fopen("F:/zhangwu.txt","w+");
	for(m=1;m<=A;m++)
	{ 
	for(n=1;n<=B;n++)
	{
	for(k=1;k<=C;k++)
	{
	scanf("%s",&fa);
	fputs(fa,fp);
	fputc('\n',fp);
	scanf("%s",&fa1);
	fputs(fa1,fp);
	fputc('\n',fp);
    } 
    }
    }
	fclose(fp);*/
	fp=fopen("F:/zhangwu.txt","r");
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
   printf("\t\t\t请选择功能：\n");
   printf("\t\t\t功能1：用户登陆\n");
   printf("\t\t\t功能2：用户注册\n");
   printf("\t\t\t功能3：修改密码\n");
   printf("\t\t\t");
   scanf("%d",&x);
   if(x==1)
   {
   	printf("\t\t\t请输入用户名\n");
   	printf("\t\t\t");
	scanf("%s",&i);
	printf("\t\t\t请输入密码\n");
	printf("\t\t\t");
	scanf("%s",&j);
   while(q!=NULL)
   {
   	if((strcmp(i,q->min))==0&&(strcmp(j,q->max))==0)
   	{
   		stu11();
   		break;
	}
	q=q->next1;
   }	
   if(q==NULL)
   {
   	printf("\t\t\t用户名或密码输入错误\n");
   }
   }
   if(x==2)
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
   	fp=fopen("F:/zhangwu.txt","a+");
   	printf("\t\t\t请输入密码\n");
   	printf("\t\t\t");
   	scanf("%s",&j);
   	fputs(i,fp);
	fputc('\n',fp);
	fputs(j,fp);
	fputc('\n',fp);
	fclose(fp);
	printf("\t\t\t注册成功\n");
   }	
	} 
if(x==3)
{
	printf("\t\t\t请输入用户名\n");
	printf("\t\t\t");
	printf("\t\t\t");
	scanf("%s",&i);
	printf("\t\t\t请输入密码\n");
	printf("\t\t\t");
	scanf("%s",&j);
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
	fp=fopen("F:/zhangwu.txt","w+");
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
	stu1();		
}
void stu42()
{
	char w[6],t[6],j[6];
	int i;
	FILE *fp;
	char fa[6];
	//fp=fopen("F:/zhangsi.txt","w+");
	//scanf("%s",&fa);
	//fputs(fa,fp);
	//fclose(fp);
	printf("\t\t\t请输入管理员密码(6位)\n"); 
	printf("\t\t\t");
	scanf("%s",&w);
	fp=fopen("F:/zhangsi.txt","a+");
	fscanf(fp,"%s",t);
	fclose(fp);
	if((strcmp(w,t))==0)
	{
		printf("\t\t\t请输入所选功能：\n");
		printf("\t\t\t1:修改密码\n");
		printf("\t\t\t2:进入管理员端\n");
		printf("\t\t\t");
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
	    			fp=fopen("F:/zhangsi.txt","w+");
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
			stu12();
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
	stu1();		
}
main()
{
	system("color F0");
	stu1();
 } 
 
