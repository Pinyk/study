n=eval(input(":"))
str=bin(n)#会生成0b开头的字符串
list1=[]
list1=list(str)
for i in range(1,3):
    del list1[0]#将0b删除
list1.reverse()
for i in list1:
    print(i,end=" ")
