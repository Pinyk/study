import random
L=[]
#chr() 用一个范围在 range（256）内的（就是0～255）整数作参数，返回一个对应的字符。
for i in range(2):
    n1=random.randint(48,57)
    L.append(chr(n1))
for j in range(1):
    n2=random.randint(65,90)
    L.append(chr(n2))
    n3=random.randint(97,122)
    L.append(chr(n3))
a=" ".join(L)
print(a)


