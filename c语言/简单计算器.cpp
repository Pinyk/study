#include <stdio.h>
#include<math.h>
#include <windows.h>
int main()
{
    int a;
    double b,c,d;
    char *Color_str[3] = {
        "color 3F",
        "color 5F",
        "color 9F",
    };
    printf("---------------------------------欢迎使用计算器---------------------------------\n");
    printf("                                 1.加法计算                                 \n"); 
    printf("                                 2.减法计算                                 \n");
    printf("                                 3.乘法计算                                 \n");
    printf("                                 4.除法计算                                 \n");
    printf("                                 5.次方计算                                 \n");
    printf("                                 6.退出程序                                 \n");
    printf("---------------------------------------------------------------------------------\n");
	printf("                     *******请输入需要进行的操作号*******                         \n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("请输入要进行计算的两个数\n");
			scanf("%lf %lf",&b,&c);
			d=b+c;
			printf("计算的结果是%.3lf\n",d);
			break;
		case 2:
			printf("请输入要进行计算的两个数\n");
			scanf("%lf %lf",&b,&c);
			d=b-c;
			printf("计算的结果是%.3lf\n",d);
			break;
		case 3:
			printf("请输入要进行计算的两个数\n");
			scanf("%lf %lf",&b,&c);
			d=b*c;
			printf("计算的结果是%.3lf\n",d);
			break;
		case 4:
			printf("请输入要进行计算的两个数\n");
			scanf("%lf %lf",&b,&c);
			d=b/c;
			printf("计算的结果是%.3lf\n",d);
			break;
		case 5:
			printf("请先依次输入指数和幂\n");
			scanf("%lf %lf",&b,&c);
			d=pow(b,c);
			printf("计算的结果是%.3lf\n",d);
			break;
		case 6:
			exit(1);
		default:
			printf("输入操作有误\n");
	} 
    int i ;
    while(1){
        for(i = 0 ; i < 3 ; i++)
        {
            system(Color_str[i]);
            Sleep(1000);
        }
    }
    return 0;
}
