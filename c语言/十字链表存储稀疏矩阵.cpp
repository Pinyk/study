#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -1
#define UNDERFLOW -2
typedef int Status;
typedef int ElemType;
typedef struct OLNode{
   int i,j;//非零元的行和列下标
   ElemType e;
   struct OLNode *right,*down; //该非零元的所在行表和列表的后继链域
}OLNode,*OLink;
typedef struct{
   OLink *rhead,*chead;//行和列链表头指针向量基址由CreateSMatrix分配
   int mu,nu,tu;//稀疏矩阵的行数列数和非零元个数
}CrossList;
Status CreateSMatrix_OL(CrossList &M){
	//创建稀疏矩阵M
   int i,k,j;
   ElemType e;
   OLink p,q;
   scanf("%d %d %d",&M.mu,&M.nu,&M.tu);//输入M的行数，列数和非零元个数
   M.rhead=(OLink *)malloc((M.mu+1)*sizeof(OLink)); //初始化行列头指针向量；各行列链表为空链表
   for(i=1;i<=M.mu;i++){
      if(!M.rhead[i])//存储分配失败
          exit(OVERFLOW);
      M.rhead[i]=NULL;
   }
   M.chead=(OLink *)malloc((M.nu+1)*sizeof(OLink));
   for(i=1;i<=M.nu;i++){
      if(!M.chead[i])
          exit(OVERFLOW);
      M.chead[i]=NULL;
   }
   for(k=0;k<M.tu;k++){
      scanf("%d %d %d",&i,&j,&e);//按任意次序输入非零元
	  if(i<1||i>M.mu||j<1||j>M.nu)
	      return ERROR;
      p=(OLink)malloc(sizeof(OLNode));//生成结点  
      if(!p)
          exit(OVERFLOW);
      p->e=e;
      p->i=i;
      p->j=j;
      p->down=NULL;
      p->right=NULL;
      if(M.rhead[i]==NULL||M.rhead[i]->j>j) {//如果头指针元素不存在或者插入位置在头指针元素前面
          p->right=M.rhead[i];
	  M.rhead[i]=p; 
      }
      else{//寻找在行表中的插入
 
	  for(q=M.rhead[i];(q->right)&&q->right->j<j;q=q->right);
	  p->right=q->right;    //完成行插入
	  q->right=p;
      }
      if(M.chead[j]==NULL||M.chead[j]->i>i){
          p->down=M.chead[j];
	  M.chead[j]=p;//头元素修改
      }
      else//寻找在列表中的插入
      {
          for(q=M.chead[j];(q->down)&&q->down->i<i;q=q->down);
	  p->down=q->down;   //完成列插入
	  q->down=p;
      }
   }
   return OK;
}
