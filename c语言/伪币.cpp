#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int x1 = 0,x2 = 0,x3 = 0;
int x1s = 0,x2s =0,x3s = 0;
int d1 = 0,d2 = 0,d3 = 0;
void test2(int array[]);
void test1(int longs,int array[],int d){
	int i;
	int ness;
	int remainder;
	for(i = d;i<=longs;i++){
		printf("%d",array[i]);
	}
	x1s = 0;
	x2s =0;
	x3s = 0;
	printf("\n");
	ness = longs/3;
	remainder = longs%3;
	if(remainder==1){
		x1 = ness;
		x2 = ness;
		x3 = ness+remainder;
	}
	if(remainder ==2){
		x1 = ness;
		x2 = ness+1;
		x3 = ness+1;
	}
	if(remainder ==0){
		x1 = ness;
		x2 = ness;
		x3 = ness;
	}
	printf("%d,%d,%d\n",x1,x2,x3);
	d1 = d;
	printf("%d\n",d1);
	for(i=d;i<d+x1;i++){
		x1s = x1s+array[i];
	}
	d2=i;
	printf("%d\n",d2);
	for(i;i<=d+x1+x2-1;i++){
		x2s = x2s+array[i];
	}
	d3=i;
	printf("%d\n",d3);
	for(i;i<=d+x1+x2+x3-1;i++){
		x3s = x3s+array[i];
	}
	printf("%d,%d,%d\n",x1s,x2s,x3s);
    test2(array);	
}
void test2(int array[]){//此函数用来判断三分后的伪币 
	while(true){
	if(x1 == x2){
		if(x1s == x2s){
			if(x3 == 2){
				if(array[d3]>array[d3+1]){
					printf("伪币在%d处",d3+1);
					break;
				}
				if(array[d3]<array[d3+1]){
					printf("伪币在%d处",d3);
					break;
			   }
			}
			if(x3 == 1){
				printf("伪币在%d处",d3);
				break;
			}
			if(x3>2){
		   	 test1(x3,array,d3);
		   	 break;
	       }
		}
		if(x1s>x2s){
			if(x2 == 2){
				if(array[d2]>array[d2+1]){
					printf("伪币在%d处",d2+1);
					break;
				}
				if(array[d2]<array[d2+1]){
					printf("伪币在%d处",d2);
					break;
			   }
			}
			if(x2 == 1){
				printf("伪币在%d处",d2);
				break;
			}
			if(x2>2){
		   	 test1(x2,array,d2);
		   	 break;
	       }
		}
		if(x1s<x2s){
			if(x1 == 2){
				if(array[d1]>array[d1+1]){
					printf("伪币在%d处",d1+1);
					break;
				}
				if(array[d1]<array[d1+1]){
					printf("伪币在%d处",d1);
					break;
			   }
			}
			if(x1 == 1){
				printf("伪币在%d处",d1);
				break;
			}
			if(x1>2){
		   	 test1(x1,array,d1);
		   	 break;
	       }
		}
	}
	if(x1!=x2){
		if(x2s == x3s){
			if(x1 == 2){
				if(array[d1]>array[d1+1]){
					printf("伪币在%d处",d1+1);
					break;
				}
				if(array[d1]<array[d1+1]){
					printf("伪币在%d处",d1);
					break;
			   }
			}
			if(x1 == 1){
				printf("伪币在%d处",d1);
				break;
			}
			if(x1>2){
		   	 test1(x1,array,d1);
		   	 break;
	       }
		}
		if(x2s > x3s){
			if(x3 == 2){
				if(array[d3]>array[d3+1]){
					printf("伪币在%d处",d3+1);
					break;
				}
				if(array[d3]<array[d3+1]){
					printf("伪币在%d处",d3);
					break;
			   }
			}
			if(x3 == 1){
				printf("伪币在%d处",d3);
				break;
			}
			if(x3>2){
		   	 test1(x3,array,d3);
		   	 break;
	       }
		}
		if(x2s < x3s){
			if(x2 == 2){
//				printf("%d,%d\n",array[d2],array[d2+1]);
				if(array[d2]>array[d2+1]){
					printf("伪币在%d处",d2+1);
					break;
				}
				if(array[d2]<array[d2+1]){
					printf("伪币在%d处",d2);
					break;
			   }
			}
			if(x2 == 1){
				printf("伪币在%d处",d2);
				break;
			}
			if(x2>2){
		   	 test1(x2,array,d2);
		   	 break;
	       }
		}
	}
  } 
}
main(){ 
	int temp;
	int i,j;
	int array[500000];
	int longs;
	srand((unsigned)(time(NULL)));
	printf("请输入硬币个数\n");
	scanf("%d",&longs);
	temp = rand()%longs+1;
	printf("%d\n",temp); 
	for(i = 1;i<=longs;i++){
		if(i==temp){
			array[i] = 0;
		}
		else{
			array[i] = 1;
		} 
	}
	test1(longs,array,1);
} 
