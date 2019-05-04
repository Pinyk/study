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
		else	/*当某个字符和前面字符相同时   将i向前移动一位  j保持不变 
		          j不需要回退   只需要把i当前位置置0就行*/
		{
			n[s[i]] = 0;
			i++;
		}
	}
	printf("%d" , max);
}
