a=[0,2,3,4,5,0,6,0,7]
k=0
for i in range(len(a)):
    if a[k]==0:
        a.append(a.pop(k))#删除为0的元素并增加到末尾
    else:
        k+=1
print(a)


#pop() 函数用于移除列表中的一个元素（默认最后一个元素），并且返回该元素的值。
