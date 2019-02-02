#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
 
    char filename[10],string1[15],string2[15],line[100];
     
    FILE *pfile=NULL;
 
    scanf("%s %s",string1,string2);
  
    pfile=fopen("d:\\password","r+");
    printf("将把文件中字符串%s替换成%s\n",string1,string2);
    while(!feof(pfile))
    {
        char *index=NULL;
        fgets(line,100,pfile);
        index=strstr(line,string1);
        if(index)
        {
            int d2=strlen(string2); 
            int d1=strlen(string1);
            printf("%s 中有%s\n",line,string1);
            if(d1!=d2)
            {
            memmove(
                index+d1+d2-d1,
                index+d1,
                strlen(line));
            }
            memcpy(index,string2,strlen(string2));  
            fseek(pfile,-strlen(line)+d2-d1,SEEK_CUR);
            fputs(line,pfile);
            fflush(pfile);
        }
	}
	fclose(pfile);
	return 0;
}
