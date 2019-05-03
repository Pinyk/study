#include <stdio.h>

int coins[1001] = {0};											//ȫ�ֱ��� 

int getK(int n)
{
	if(n % 3 == 0)
		return n / 3;
	else
		return n / 3 + 1;
}
 
int getWeight(int left , int right)								//���һ����Ӳ�������� 
{
	int sum = 0;
	int i;
	for(i = left ; i <= right ; i++)
		sum += coins[i];
	return sum;
}

int findCoin(int right , int left)
{
	int n = right - left + 1;   		 //nΪ�ö�Ӳ������ 
	int k1 = left + getK(n) - 1;		 //k1Ϊ��һ�����һ���±� 
	int k2 = left + 2 * getK(n) - 1;	 //k2Ϊ�ڶ������һ���±�
	
	if(getWeight(left , k1) == getWeight(k1 + 1 , k2))		  //ǰ������ȣ��ڵ���������
	{
		if(right - k2 == 1)									  //������һ��ֻ��һ�������Ӳ��Ϊ�ٱ� 
			return right; 
		else
		{
			left = k2 + 1;									  //������������һ�Ѳ��� 
			return findCoin(left , right);
		}
	} 
	
	else if(getWeight(left , k1) < getWeight(k1 + 1 , k2))   //�����һ��С�ڵڶ��ѣ����ҵ�һ�� 
	{
		if(k1 == left)
		{
            return left;
        } 
		else 
		{
        	right = k1;
            return findCoin(left , right);
        }
	} 
	
	else													//�ڶ���С�ڵ�һ�ѣ����ҵڶ��� 
	{
		if ((k2 - k1) == 1)
        	return k2;
         else 
		 {
            left = k1 + 1;
            right = k2;
            return findCoin(left , right);
        }
	}
}

int main()
{
	int n ,i ,index;
	printf("������Ӳ��������");
	scanf("%d" ,&n);
	printf("������ٱ��±꣺");
	scanf("%d" ,&i);
	coins[i] = -1;
	index = findCoin(0 , n);
	printf("�ٱ��±�Ϊ%d" ,index);
}

