/*��ϵͳΪС��ˮ�ѹ���ϵͳ
��ҪΪС������Ա���û��ṩˮ�Ѳ�ѯ
�书�����£�
�û��ˣ�
1����ѯĳ����ˮ�����������������ˮ�ѡ� 
2����ʾ������·���ˮ����ˮ�ѡ�  
ע��ˮ�ѻ���ϸָ���������Ƶ���ˮ���Ͳ�����ˮ�� 
����ÿ���û���ˮ��������12��ÿ��0.8Ԫ�������Ĳ��ְ�ÿ��1.8Ԫ��
����Ա�ˣ�
1����ѯĳһ�û�ĳһ���µ���ˮ����ˮ�ѡ� 
2����ѯĳһ��Ԫ�и����û���ĳһ���µ���ˮ����ˮ�ѡ�
3������ĳһ�û�ĳһ���µ���ˮ�����Զ�����ˮ�ѡ�
4������ĳ�û�һ���µ���ˮ���� 
5��ɾ��ĳ�û�һ���µ���ˮ���� */
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
	printf("\t\t\t������Ҫɾ�����û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t������Ҫɾ�����·�\n");
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
			//printf("��%d¥����%d������%d��\n������ˮ��Ϊ��%d\nˮ��Ϊ��%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     
     	p=p->next;
     	r=r->next;
	 
	}
	deposit(m);
	printf("\t\t\t�������������һ��\n");
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
	printf("\t\t\t������Ҫ���ӵ��û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t������Ҫ���ӵ��·�\n");
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
			printf("\t\t\t������Ҫ���ӵ���ˮ��\n");
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
			//printf("��%d¥����%d������%d��\n������ˮ��Ϊ��%d\nˮ��Ϊ��%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	deposit(g);
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu33()
{
	cat m;
	int a,b,c,n,y;
	printf("\t\t\t������Ҫ���ĵ��û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t������Ҫ���ĵ��·�\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t������%d�·ݸ��ĵ���ˮ��\n");
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
			printf("\t\t\t��%d¥����%d������%d��\n\t\t\t������ˮ��Ϊ��%d\n\t\t\tˮ��Ϊ��%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	deposit(g);
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu32()
{
	cat m;
	int a,b,y;
	printf("\t\t\t������Ҫ��ѯ����Ϣ(��¥������)\n");
	printf("\t\t\t");
	scanf("%d %d",&a,&b);
	printf("\t\t\t������Ҫ��ѯ���·�\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->month==y)
		{
			printf("\t\t\t��%d¥����%d��,��%d��\n\t\t\t��%d����ˮ��Ϊ��%d\n\t\t\tˮ��Ϊ��%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->month,m->water,m->cost);
		}
		m=m->next;
	}
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu31()
{
	cat m;
	int a,b,c,y;
	printf("\t\t\t������Ҫ��ѯ���û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t������Ҫ��ѯ���·�\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t��%d¥����%d������%d��\n\t\t\t������ˮ��Ϊ��%d\n\t\t\tˮ��Ϊ��%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
		else
		m=m->next;
	}
	printf("\t\t\t�������������һ��\n");
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
	printf("\t\t\t������Ҫ��ѯ���û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("\t\t\t%d %d %d",&a,&b,&c);
	//printf("������Ҫ��ѯ���·�\n");
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
			printf("\t\t\t�������%d����ˮ��Ϊ��%d\n\t\t\tˮ��Ϊ��%1.1f\n",m->month,m->water,m->cost);
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
    printf("\t\t\t�������������һ��\n");
	getch(); 
	system("cls");
	stu11();		
}
void stu22()
{
	cat m;
	int a,b,c,y;
	printf("\t\t\t������Ҫ��ѯ���û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t������Ҫ��ѯ���·�\n");
	printf("\t\t\t");
	scanf("%d",&y);
	news1();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t��õ�%d¥����%d������%d��\n\t\t\t��������ˮ��Ϊ��%d\n\t\t\tˮ��Ϊ��%1.1f",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
		else
		m=m->next;
	}
	if(m==NULL)
	{
		printf("\t\t\t��Ǹ�޴��û����޴���ˮ��\n");
		}
		printf("\t\t\t�������������һ��\n");
	    getch(); 
	    system("cls");
	    stu11();			
}
void news1()/*�û��˶�ȡ�ļ�*/ 
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
    printf("\t\t\t�����뼤����\n"); 
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
   printf("\t\t\t�����뻽����\n");
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
    printf("\t\t\t�����뻽����\n");
    printf("\t\t\t");
    scanf("%d",&x);   
  }
	//system("cls");
 }
}
    fclose(fp);
    g=h;
    printf("\t\t\t�����������\n");
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
	printf("\t\t\t�����뻽����\n");
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
    printf("\t\t\t�����뻽����\n");
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
		printf("\t\t\t��%d¥����%d��Ԫ����%d������%d�·���ˮ��%d��ˮ��Ϊ%1.1f\n",a->lnumber,a->dnumber,a->hnumber,a->month,a->water,a->cost);
		//printf("%d\n",a->water);
		a=a->next;
	}
}
void deposit(cat h)/*д�ļ�*/ 
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
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	stu12();		
}
void stu1()
{
	int a;
	printf("\t\t-----------------------------------------\n");
	printf("\t\t\t��ӭʹ��С��ˮ�ѹ���ϵͳ\n");
	printf("\t\t\t��ѡ���û��˻��ǹ���Ա��\n");
	printf("\t\t\t����1���û���\n");
	printf("\t\t\t����2������Ա��\n");
	printf("\t\t\t����3��������\n");
	printf("\t\t\t����0���˳�����\n");
	printf("\t\t\t");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:stu51();break;
		case 2:stu42();break;
		case 3:news();break;
		case 0:printf("\t\t\t�˳�����\n"); break;
		default:printf("\t\t\tû�д˿ͻ���\n");
	}
	
}
void stu11()
{
	int a;
	printf("\t\t---------------------------------------------------------------------\n");
	printf("\t\t\t��ӭ�����û���\n");
	printf("\t\t\t����1����ѯĳ����ˮ�����������������ˮ�ѡ�\n");
	printf("\t\t\t����2����ʾ����������·���ˮ����ˮ�ѡ�\n");
	printf("\t\t\t����3���������˵���\n");
	printf("\t\t\t");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:stu22();break;
		case 2:stu23();break;
		case 3:stu1();break;
		default:printf("\t\t\tû�д˹���\n");
	}
	printf("\t\t\t�������������һ��\n");
	 getch(); 
	 system("cls");
	 stu11();		
 } 
void stu12()
{
	int b;
	printf("\t\t---------------------------------------------------------------------\n");
	printf("\t\t\t��ӭ��������Ա��\n");
	printf("\t\t\t����1����ѯĳһ�û�ĳһ���µ���ˮ����ˮ�ѡ�\n");
	printf("\t\t\t����2����ѯĳһ��Ԫ�и����û���ĳһ���µ���ˮ����ˮ�ѡ�\n");
	printf("\t\t\t����3������ĳһ�û�����ˮ�����Զ�����ˮ�ѡ�\n");
	printf("\t\t\t����4������ĳ�û�һ���µ���ˮ����\n");
	printf("\t\t\t����5��ɾ��ĳ�û�һ���µ���ˮ����\n");
	printf("\t\t\t����6����ʾ�����û�������ˮ����ˮ��\n");
	printf("\t\t\t����7��������ҳ��\n");
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
		printf("\t\t\t�������������һ��\n");
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
    /*printf("ԭʼ�û���½\n");
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
   printf("\t\t\t��ѡ���ܣ�\n");
   printf("\t\t\t����1���û���½\n");
   printf("\t\t\t����2���û�ע��\n");
   printf("\t\t\t����3���޸�����\n");
   printf("\t\t\t");
   scanf("%d",&x);
   if(x==1)
   {
   	printf("\t\t\t�������û���\n");
   	printf("\t\t\t");
	scanf("%s",&i);
	printf("\t\t\t����������\n");
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
   	printf("\t\t\t�û����������������\n");
   }
   }
   if(x==2)
   {
   	printf("\t\t\t�������û���\n");
   	printf("\t\t\t");
	scanf("%s",&i);
   	while(q!=NULL)
   {
   	if((strcmp(i,q->min))==0)
   	{
   	   printf("\t\t\t���û����ѱ�ע��\n");
   	   break;
	}
	q=q->next1;
   }
   if(q==NULL)
   {
   	fp=fopen("F:/zhangwu.txt","a+");
   	printf("\t\t\t����������\n");
   	printf("\t\t\t");
   	scanf("%s",&j);
   	fputs(i,fp);
	fputc('\n',fp);
	fputs(j,fp);
	fputc('\n',fp);
	fclose(fp);
	printf("\t\t\tע��ɹ�\n");
   }	
	} 
if(x==3)
{
	printf("\t\t\t�������û���\n");
	printf("\t\t\t");
	printf("\t\t\t");
	scanf("%s",&i);
	printf("\t\t\t����������\n");
	printf("\t\t\t");
	scanf("%s",&j);
   while(q!=NULL)
   {
   	if((strcmp(i,q->min))==0&&(strcmp(j,q->max))==0)
   	{
   		printf("\t\t\t������Ҫ�޸ĵ�����\n");
   		printf("\t\t\t");
   		scanf("%s",&q->max);
   		break;
	}
	q=q->next1;
   }	
   if(q==NULL)
   {
   	printf("\t\t\t�û����������������\n");
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
	printf("\t\t\t�޴˹���\n");
}
    printf("\t\t\t�������������һ��\n");
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
	printf("\t\t\t���������Ա����(6λ)\n"); 
	printf("\t\t\t");
	scanf("%s",&w);
	fp=fopen("F:/zhangsi.txt","a+");
	fscanf(fp,"%s",t);
	fclose(fp);
	if((strcmp(w,t))==0)
	{
		printf("\t\t\t��������ѡ���ܣ�\n");
		printf("\t\t\t1:�޸�����\n");
		printf("\t\t\t2:�������Ա��\n");
		printf("\t\t\t");
		scanf("%d",&i);
	    if(i==1)
	    {
	    	printf("\t\t\t������ԭ����\n");
	    	printf("\t\t\t");
	    	scanf("%s",&j);
	    	if((strcmp(t,j))==0)
	    	{
	    		printf("\t\t\t������������\n");
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
				printf("\t\t\tԭ�������\n");
			}
		}
		if(i==2)
		{
			stu12();
		}
		if(i!=1&&i!=2)
		{
			printf("\t\t\t�޴˹���\n");
		}
		if(i!=3&&i!=2&&i!=1)
      { 
	   printf("\t\t\t�޴˹���\n");
      }
	}
	else
	{
		printf("\t\t\t���벻��ȷ\n");
	}
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	stu1();		
}
main()
{
	system("color F0");
	stu1();
 } 
 
