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
    printf("---------------------------------��ӭʹ�ü�����---------------------------------\n");
    printf("                                 1.�ӷ�����                                 \n"); 
    printf("                                 2.��������                                 \n");
    printf("                                 3.�˷�����                                 \n");
    printf("                                 4.��������                                 \n");
    printf("                                 5.�η�����                                 \n");
    printf("                                 6.�˳�����                                 \n");
    printf("---------------------------------------------------------------------------------\n");
	printf("                     *******��������Ҫ���еĲ�����*******                         \n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("������Ҫ���м����������\n");
			scanf("%lf %lf",&b,&c);
			d=b+c;
			printf("����Ľ����%.3lf\n",d);
			break;
		case 2:
			printf("������Ҫ���м����������\n");
			scanf("%lf %lf",&b,&c);
			d=b-c;
			printf("����Ľ����%.3lf\n",d);
			break;
		case 3:
			printf("������Ҫ���м����������\n");
			scanf("%lf %lf",&b,&c);
			d=b*c;
			printf("����Ľ����%.3lf\n",d);
			break;
		case 4:
			printf("������Ҫ���м����������\n");
			scanf("%lf %lf",&b,&c);
			d=b/c;
			printf("����Ľ����%.3lf\n",d);
			break;
		case 5:
			printf("������������ָ������\n");
			scanf("%lf %lf",&b,&c);
			d=pow(b,c);
			printf("����Ľ����%.3lf\n",d);
			break;
		case 6:
			exit(1);
		default:
			printf("�����������\n");
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
