#include <stdio.h>
#define SIZE 130
int main()
{
	char s[SIZE];
	int i = 0, j = 0 ,max = 0;  
	int n[SIZE] = {0};
	gets(s);
	while(s[i] != 0 && s[j] != 0)
	{
		if(n[s[j]] == 0)		
		{
			n[s[j]] = 1;
			j++;
			if(max < j - i)
				max = j - i;
		}
		else	/*��ĳ���ַ���ǰ���ַ���ͬʱ   ��i��ǰ�ƶ�һλ  j���ֲ��� 
		          j����Ҫ����   ֻ��Ҫ��i��ǰλ����0����*/
		{
			n[s[i]] = 0;
			i++;
		}
	}
	printf("%d" , max);
}
