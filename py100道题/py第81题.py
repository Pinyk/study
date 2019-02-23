n=int(input("请输入四位的整数n:"))
if 999<n<10000:
    a=n//1000
    b=n//100-a*10
    c=n%100
    d=n//10-a*100-b*10
    
    a=(a+5)%10
    b=(b+5)%10
    d=(d+5)%10
    c=(c+5)%10
    a=c
    b=d
    print(a,b,c,d)
else:
    print("输入错误")
