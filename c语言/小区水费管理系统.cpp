//�û�˵�������� 
/*��ϵͳΪС��ˮ�ѹ���ϵͳ
��ҪΪС������Ա���û��ṩˮ�Ѳ�ѯ
�书�����£�
�û��ˣ�
1���û����ɹ���Աͳһ�·�����ʼ����Ϊ123456 
2����ѯĳ����ˮ�����������������ˮ�ѡ� 
3����ʾ������·���ˮ����ˮ�ѡ�  
ע��ˮ�ѻ���ϸָ���������Ƶ���ˮ���Ͳ�����ˮ�� 
����ÿ���û���ˮ��������12��ÿ��0.8Ԫ�������Ĳ��ְ�ÿ��1.8Ԫ��
����Ա�ˣ�
1����ѯĳһ�û�ĳһ���µ���ˮ����ˮ�ѡ� 
2����ѯĳһ��Ԫ�и����û���ĳһ���µ���ˮ����ˮ�ѡ�
3������ĳһ�û�ĳһ���µ���ˮ�����Զ�����ˮ�ѡ�
4������ĳ�û�һ���µ���ˮ���� 
5��ɾ��ĳ�û�һ���µ���ˮ���� */
/*
���������ⲿһ��д����3��txt�ļ����ֱ�Ϊ��
userpassword.txt    �û����˻����� 
managerpassword.txt     ����Ա���˻����루Ψһ��
userdata.txt      ���������û���ˮ�� 
*/
#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
#include<string.h>
#include<time.h>
typedef struct teacher  //�û�����Ϣ���� 
{
	int lnumber; //¥�� 
	int dnumber; //��Ԫ�� 
	int hnumber; //���� 
	int month;  //�·� 
	int water;  //ˮ�� 
	float cost;  //���� 
	struct teacher *next;
}dog,*cat;
typedef struct teachers //ϵͳ���е��û��������� 
{
	char min[20];
	char max[20];
	struct teachers *next1;
}man,*woman;
int A=2;
int B=4;  //������ȫ�ֱ�����������������û���Ϣ�� 
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
	printf("				   ������Ҫɾ�����û�(��¥������������)\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d %d %d",&a,&b,&c);
	printf("				   ������Ҫɾ�����·�\n");
	printf("\n\t\t\t\t   ----��  ");
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
	printf("\t\t\t\t\t�������������һ��\n");
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
	printf("\t\t\t������Ҫ���ӵ��û�(��¥������������)\n");
	printf("\t\t\t");
	scanf("%d %d %d",&a,&b,&c);
	printf("\t\t\t������Ҫ���ӵ��·�\n");
	printf("\t\t\t");
	scanf("%d",&y);
	readdata();//g�õ���������ļ���ͷ����ַ 
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
			printf("��%d¥����%d������%d��\n������ˮ��Ϊ��%d\nˮ��Ϊ��%1.1f\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			break;
		}
     else
     {
     	m=m->next;
	 }
	}
	savedata(g);
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	managermenu();		
}
void modify()
{
	cat m;
	int a,b,c,n,y;
	printf("				   ������Ҫ��ѯ���û�(��¥������������)\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d %d %d",&a,&b,&c);
	printf("				   ������Ҫ���ĵ��·�\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d",&y);
	readdata();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("				   ������Ҫ���ĵ���ˮ��\n");
			printf("\n\t\t\t\t   ----��  ");
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
			printf("\t\t\t\t\t��%d¥����%d��,��%d��\n\t\t\t\t\t��%d����ˮ��Ϊ��%d��\n\t\t\t\t\tˮ��Ϊ��%1.1fԪ\n",m->lnumber,m->dnumber,m->hnumber,m->month,m->water,m->cost);
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
	printf("\t\t\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	managermenu();		
}
void msearch2()
{
	cat m;
	int a,b,y;
	printf("				   ������Ҫ��ѯ���û�(��¥������)\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d %d",&a,&b);
	printf("				   ������Ҫ��ѯ���·�\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d",&y);
	readdata();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->month==y)
		{
			printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\t\t\t\t\t��%d¥����%d��,��%d��\n\t\t\t\t\t��%d����ˮ��Ϊ��%d��\n\t\t\t\t\tˮ��Ϊ��%1.1fԪ\n",m->lnumber,m->dnumber,m->hnumber,m->month,m->water,m->cost);
			printf("\n");
			printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\n");
		}
		m=m->next;
	}
	printf("\t\t\t�������������һ��\n");
	getch(); 
    system("cls");
	managermenu();		
}
void msearch1()
{
	cat m;
	int a,b,c,y;
	printf("				   ������Ҫ��ѯ���û�(��¥������������)\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d %d %d",&a,&b,&c);
	printf("				   ������Ҫ��ѯ���·�\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d",&y);
	readdata();
	m=g;
	while(m!=NULL)
	{
		if(m->lnumber==a&&m->dnumber==b&&m->hnumber==c&&m->month==y)
		{
			printf("\t\t\t\t======================================================\n");
			printf("\n");
			printf("\t\t\t\t\t��%d¥����%d������%d��\n\t\t\t\t\t������ˮ��Ϊ��%d��\n\t\t\t\t\tˮ��Ϊ��%1.1fԪ\n",m->lnumber,m->dnumber,m->hnumber,m->water,m->cost);
			printf("\n");
			printf("\t\t\t\t======================================================\n");
			break;
		}
		else
		m=m->next;
	}
	printf("\t\t\t\t\t�������������һ��\n");
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
			//printf("\t\t\t�������%d����ˮ��Ϊ��%d\n\t\t\tˮ��Ϊ��%1.1f\n",m->month,m->water,m->cost);
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
	usermenu();		
}
void usearch()
{
	cat m;
	int y;
	printf("				     ������Ҫ��ѯ���·�\n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d",&y);
	readdata();
	m=g; 
	while(m!=NULL)
	{
		if(m->lnumber==(users[0]-48)&&m->dnumber==(users[2]-48)&&m->hnumber==(users[4]-48)&&m->month==y)
		{
			printf("\t\t======================================================\n");
			printf("\t\t\t\t���ã���������ˮ��Ϊ��%d��\n\t\t\t\tˮ��Ϊ��%1.1fԪ\n",m->water,m->cost);
			printf("\t\t======================================================\n");
			break;
		}
		else
		m=m->next;
	}
	if(m==NULL)
	{
		printf("\t\t\t��Ǹ�޴���ˮ��\n");
	}
	printf("\t\t\t\t�������������һ��\n");
    getch(); 
    system("cls");
    usermenu();			
}
void readdata()/*�û��˶�ȡ�ļ�*/ 
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
void news()//�����Ϣ���ɺ��� 
{
    FILE *fp;
    int x,y;
    int i,j,k;
    cat h;
    dog* bang;
    dog* r;
    fp=fopen("F:/userdata.txt","r");
    printf("\t\t\t������У����\n"); 
    printf("\t\t\t");
    scanf("%d",&y);
    if(fp==NULL)
    {
	    if(y==1)
		{
			g=create();//���Ϊ��һ��������ɣ����ȿ�ʼ���ļ��ﴴ��������Ϣ 
		}
    }
    else//��������������û���Ϣ�����Ƚ��ж�ȡ��Ϣ���ٽ�֮�����Ϣ׷�ӵ���ʱ������� 
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
   		printf("\t\t\t�Ƿ��Ϊ�����û��������һ���µ�ˮ����1/0��\n");
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
					   bang->water=rand()%(20-1)+1;//������� 
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
    		printf("\t\t\t�ٴζ�Ϊ�����û��������һ���µ�ˮ����1/0����\n");
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
	mainmenu();		
}
cat create()//��һ�������Ϣ���ɺ��� 
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
	printf("\t\t\t�Ƿ��Ϊ�����û��������һ���µ�ˮ����1/0��\n");
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
    	printf("\t\t\t�ٴζ�Ϊ�����û��������һ���µ�ˮ����1/0����\n");
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
	printf("\t\t\t|¥��   ��Ԫ��   ����   �·�   ��ˮ�����֣�   ˮ�ѣ�Ԫ��|\n"); 
	while(a!=NULL)
	{
		printf("\t\t\t|  %d\t  %d\t  %d\t %d\t   %d\t       %-6.1lf   |\n",a->lnumber,a->dnumber,a->hnumber,a->month,a->water,a->cost);
		a=a->next;
	}
	printf("\t\t\t--------------------------------------------------------\n");
}
void savedata(cat h)/*д�ļ�*/ 
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
	printf("\t\t\t�������������һ��\n");
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
	printf("				      1.�û���¼\n");
	printf("				      2.����Ա��¼\n");
	printf("				      3.ϵͳʹ��˵��\n");
	printf("				      4.�˳�ϵͳ\n");
	printf("\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\t\t\t      ��ѡ�� | 1 | 2 | 3 | 4 | \n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:userlogin();break;
		case 2:managerrepassword();break;
		case 3://news();
			sm();
			break;
		case 4:printf("\t\t\t���˳�"); exit(1); break;
		default:printf("\t\t\tû�д˿ͻ���\n");
	}
}

void sm()
{
	printf("\t\t\t\t\t     ʹ��˵��������\n");
	printf("\t\t\t-----------------------------------------------------------\n");
	printf("\t\t\t| ��ϵͳΪС��ˮ�ѹ���ϵͳ                                |\n");
	printf("\t\t\t| ��ҪΪС������Ա���û��ṩˮ�Ѳ�ѯ                      |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| һ.�û���¼˵����                                       |\n");
	printf("\t\t\t| �û����ɹ���Աͳһ�·�����ʼ����Ϊ123456	          |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| ��.�û�����˵����                                       |\n");
	printf("\t\t\t| 1.��ѯĳ����ˮ��������ʾ��������ˮ�ѡ�                  |\n");		
	printf("\t\t\t| 2.������·���ˮ����ˮ��ͳ��ͼ                          |\n");			
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| ��.����Ա��¼˵����                                     |\n");
	printf("\t\t\t| �������������ڲ���Ա��֪���û�����ʹ�øù���          |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| ��.����Ա����˵����                                     |\n");
	printf("\t\t\t| 1����ѯĳһ�û�ĳһ���µ���ˮ����ˮ�ѡ�                 |\n");			
	printf("\t\t\t| 2����ѯĳһ��Ԫ�и����û���ĳһ���µ���ˮ����ˮ�ѡ�     |\n");
	printf("\t\t\t| 3������ĳһ�û�ĳһ���µ���ˮ�����Զ�����ˮ�ѡ�         |\n");
	printf("\t\t\t| 4������ĳ�û�һ���µ���ˮ����                           |\n");
	printf("\t\t\t| 5��ɾ��ĳ�û�һ���µ���ˮ����                           |\n");
	printf("\t\t\t|                                                         |\n");
	printf("\t\t\t| ��.ˮ��ʹ��˵��                                         |\n");
	printf("\t\t\t| ��ˮ��������12��ÿ��0.8Ԫ�������Ĳ��ְ�ÿ��1.8Ԫ����    |\n");
	printf("\t\t\t-----------------------------------------------------------\n");
	printf("\t\t\t�������������һ��\n");
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
	printf("\t\t\t  1.��ѯĳ����ˮ�������鿴��������ˮ�ѡ�\n");
	printf("\t\t\t  2.��ʾ����������·���ˮ����ˮ�ѡ�\n");
	printf("\t\t\t  3.�������˵���\n");
	printf("\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\t\t\t      ��ѡ�� | 1 | 2 | 3 | \n");
	printf("\n\t\t\t\t   ----��  ");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:usearch();break;
		case 2:usort();break;
		case 3:mainmenu();break;
		default:printf("\t\t\tû�д˹���\n");
	}
	printf("\t\t\t�������������һ��\n");
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
	printf("\t\t\t  1����ѯĳһ�û�ĳһ���µ���ˮ����ˮ�ѡ�\n");
	printf("\t\t\t  2����ѯĳһ��Ԫ�и����û���ĳһ���µ���ˮ����ˮ�ѡ�\n");
	printf("\t\t\t  3������ĳһ�û�����ˮ�����Զ�����ˮ�ѡ�\n");
	printf("\t\t\t  4������ĳ�û�һ���µ���ˮ����\n");
	printf("\t\t\t  5��ɾ��ĳ�û�һ���µ���ˮ����\n");
	printf("\t\t\t  6����ʾ�����û�������ˮ����ˮ��\n");
	printf("\t\t\t  7��������ҳ��\n");	
	printf("\n");
	printf("\n");
	printf("\t\t\t======================================================");
	printf("\n");
	printf("\t\t\t      ��ѡ�� | 1 | 2 | 3 | 4 | 5 | 6 | 7 | \n");
	printf("\n\t\t\t\t   ----��  ");
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
		printf("\t\t\t�������������һ��\n");
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
	printf("				      1.�û���¼\n");
	printf("				      2.�޸�����\n");
	printf("\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\t\t\t      ��ѡ�� | 1 | 2 | \n");
	printf("\n\t\t\t\t   ----��  ");
    scanf("%d",&x);
    if(x==1)
    {
	   	printf("\t\t\t\t�������û���\n");
	   	printf("\t\t\t\t");
		scanf("%s",&i);
		printf("\t\t\t\t����������\n");
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
		}	////��¼���� 
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
		   	printf("\t\t\t�û����������������\n");
	    }
		system("cls"); 
	}
   if(x==3)
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
		   	fp=fopen("F:/userpassword.txt","a+");
		   	printf("\t\t\t����������\n");
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
			printf("\t\t\tע��ɹ�\n");
	   		}	
	} 
	if(x==2)
	{
		printf("\t\t\t�������û���\n");
		printf("\t\t\t");
		scanf("%s",&i);
		printf("\t\t\t����������\n");
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
	printf("\t\t\t�޴˹���\n");
}
    printf("\t\t\t�������������һ��\n");
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
	printf("				    ���������Ա����(6λ)\n");
	printf("\n");
	printf("\t\t======================================================");
	printf("\n");
	printf("\n\t\t\t\t   ----��  "); 
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
		printf("				  1.�޸�����\n");
		printf("				  2.�������Ա��\n");
		printf("\n");
		printf("\n");
		printf("\t\t======================================================");
		printf("\n");
		printf("\t\t\t      ��ѡ�� | 1 | 2 | \n");
		printf("\n\t\t\t\t   ----��  ");
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
	    			fp=fopen("F:/managerpassword.txt","w+");
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
			system("cls");
			managermenu();
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
	mainmenu();		
}

main()
{
	system("color F1");
	mainmenu();
} 
