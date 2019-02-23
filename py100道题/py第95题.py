list=[2,3,4,5,6,7,8,10]
n=int(input("请输入一个数:"))
for i in range(n+1):
    if i not in list:
            print(i,end=" ")
    
