#include<stdio.h>
#include<string.h>
int login();
int main()
{
    login();
    return 0;
}
int login()
{
	FILE *fp;
	char str[9]={0};
	fp=fopen("d:\\password.txt","r");
	fscanf(fp,"%s",str);
    int i = 3,j;
    char input[20] = { 0 };
    while (i)
    {
        printf("��������ĵ�¼����:");
        scanf("%s", input);
        if (!strcmp(str, input))
        {
            j=0;
            break; 
        }
        else
        {
            i--;
            printf("��������ʣ���������Ϊ%d\n",i);
        }
    }
    if (i == 0)
    {
        j=-1;
    }
    if (j == 0)
    {
        printf("��¼�ɹ���\n");
 
    }
    else if (j == -1)
    {
        printf("��������Ѿ��þ���ϵͳ���Զ��˳���\n");
    }
    return 0;
}
