#include<stdio.h>
int main()
{
int  i = 0 ,sum = 0,psum=0,esum=0;
char  a[100];
printf("\n     请输入一个十六进制数\n     ");
    scanf("%s",&a);
printf("\n     该数二进制表示如下\n     ");
while( a[i] != 0 )
{
          switch(a[i++])
  {
case 'a': printf("1010"); psum+=2 ; esum+=2 ; break;
case 'b': printf("1011"); psum+=2 ; esum+=2 ; break;
case 'c': printf("1100"); psum+=2 ; esum+=2 ; break;
case 'd': printf("1101"); psum+=3 ; esum+=1 ; break;
case 'e': printf("1110"); psum+=3 ; esum+=1 ; break;
case 'f': printf("1111"); psum+=4 ; esum+=0 ; break;
case 'A': printf("1010"); psum+=2 ; esum+=2 ; break;
case 'B': printf("1011"); psum+=3 ; esum+=1 ; break;
case 'C': printf("1100"); psum+=2 ; esum+=2 ; break;
case 'D': printf("1101"); psum+=3 ; esum+=1 ; break;
case 'E': printf("1110"); psum+=3 ; esum+=1 ; break;
case 'F': printf("1111"); psum+=4 ; esum+=0 ; break;
case '1': printf("0001"); psum+=1 ; esum+=3 ; break;
case '2': printf("0010"); psum+=1 ; esum+=3 ; break;
case '3': printf("0011"); psum+=2 ; esum+=2 ; break;
case '4': printf("0100"); psum+=1 ; esum+=3 ; break;
case '5': printf("0101"); psum+=2 ; esum+=2 ; break;
case '6': printf("0110"); psum+=2 ; esum+=2 ; break;
case '7': printf("0111"); psum+=3 ; esum+=1 ; break;
case '8': printf("1000"); psum+=1 ; esum+=3 ; break;
case '9': printf("1001"); psum+=2 ; esum+=2 ; break;
case '0': printf("0000"); psum+=0 ; esum+=4 ; break;
  }
}
printf("\n     共有%d个1 %d个0\n     ",psum,esum);
}
