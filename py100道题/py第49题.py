#待更改
def input_string():
    string = input("请输入一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串:")
    string0 = string
 
    #判断是否为空字符串
    if string.strip()=='':
        print(string0,"字符串有效")
   
    #判断是否为奇数    
    if len(string.strip()) > 0:
        if len(string) % 2 == 1:
            print(string0,'字符串中括号数量为奇数')
        #循环遍历字符串，存在()[]{}的剔除
        if len(string) % 2 == 0:
            for n in range(int(len(string))):
                for i in range(len(string)-2):
                    left_right1=string[i] == '(' and string[i+1] == ')'
                    left_right2=string[i] == '[' and string[i+1] == ']'
                    left_right3=string[i] == '{' and string[i+1] == '}'  
                    if left_right1 or left_right2 or left_right3:
                        string = string[:i]+string[i+2:]#字符串拼接
                        break
            if len(string)>2:
                print(string0,'字符串中括号无效')
            if len(string)==2:
                d=['()','[]','{}']
                if string not in d:
                    print(string0,'字符串中括号无效')
                else:
                    print(string0,'字符串中括号有效')

                    print(string0,'字符串中括号有效')

--------------------- 
作者：数据任 
来源：CSDN 
原文：https://blog.csdn.net/weixin_40098944/article/details/81078655 
版权声明：本文为博主原创文章，转载请附上博文链接！
