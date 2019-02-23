def gao(str):
    list1=list(str)
    for i in list1:    
         n=list1.count(i)
         if n >=2:
            return True
         if n==1:
            return False
def main():
     s=str(input("请输入一组整数:"))
     print(gao(s))
main()
