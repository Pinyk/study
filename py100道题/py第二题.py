i=int(input("请输入利润值"))
if i<=10:
    m=i*0.1
elif i>10 and i<=20:
    m=10*0.1+(i-10)*0.075
elif i>20 and i<=40:
    m=10*0.1+10*0.075+(i-20)*0.05
elif i>40 and i<=60:
    m=10*0.1+10*0.075+20*0.05+(i-40)*0.03
elif i>60 and i<=100:
    m=10*0.1+10*0.075+20*0.05+20*0.03+(i-60)*0.015
else:
    m=10*0.1+10*0.75+20*0.05+20*0.03+40*0.015(i-100)*0.01
print("奖金总数为%f万元"%m)
