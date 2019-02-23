a=open("D:\\text\\爱丽丝梦游仙境.txt","r",buffering=0)#无缓冲  写多少存多少
words=list(x)
for i in words:
    if words.count(i) >10:
        words.sort()
        print(words.reverse())
a.close()
