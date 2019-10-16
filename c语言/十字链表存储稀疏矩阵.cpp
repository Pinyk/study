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
   int i,j;//����Ԫ���к����±�
   ElemType e;
   struct OLNode *right,*down; //�÷���Ԫ�������б���б�ĺ������
}OLNode,*OLink;
typedef struct{
   OLink *rhead,*chead;//�к�������ͷָ��������ַ��CreateSMatrix����
   int mu,nu,tu;//ϡ���������������ͷ���Ԫ����
}CrossList;
Status CreateSMatrix_OL(CrossList &M){
	//����ϡ�����M
   int i,k,j;
   ElemType e;
   OLink p,q;
   scanf("%d %d %d",&M.mu,&M.nu,&M.tu);//����M�������������ͷ���Ԫ����
   M.rhead=(OLink *)malloc((M.mu+1)*sizeof(OLink)); //��ʼ������ͷָ������������������Ϊ������
   for(i=1;i<=M.mu;i++){
      if(!M.rhead[i])//�洢����ʧ��
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
      scanf("%d %d %d",&i,&j,&e);//����������������Ԫ
	  if(i<1||i>M.mu||j<1||j>M.nu)
	      return ERROR;
      p=(OLink)malloc(sizeof(OLNode));//���ɽ��  
      if(!p)
          exit(OVERFLOW);
      p->e=e;
      p->i=i;
      p->j=j;
      p->down=NULL;
      p->right=NULL;
      if(M.rhead[i]==NULL||M.rhead[i]->j>j) {//���ͷָ��Ԫ�ز����ڻ��߲���λ����ͷָ��Ԫ��ǰ��
          p->right=M.rhead[i];
	  M.rhead[i]=p; 
      }
      else{//Ѱ�����б��еĲ���
 
	  for(q=M.rhead[i];(q->right)&&q->right->j<j;q=q->right);
	  p->right=q->right;    //����в���
	  q->right=p;
      }
      if(M.chead[j]==NULL||M.chead[j]->i>i){
          p->down=M.chead[j];
	  M.chead[j]=p;//ͷԪ���޸�
      }
      else//Ѱ�����б��еĲ���
      {
          for(q=M.chead[j];(q->down)&&q->down->i<i;q=q->down);
	  p->down=q->down;   //����в���
	  q->down=p;
      }
   }
   return OK;
}
