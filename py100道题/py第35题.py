n=str(input("请输入一个五位整数:"))
L=list(n)
a=len(L)
if a!=5:
     print("输入的不是5位整数")
elif L[0]==L[4]and L[1]==L[3]:
    print(n,"是回文数")
else:
    print(n,"不是回文数")
