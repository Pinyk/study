import itertools#迭代
for i in itertools.permutations("xyz"):
    if i[0] != "x" and i[2] != "x" and i[2] != "z":#分别代表abc
        print("a 挑战" ,i[0],"b 挑战",i[1],"c 挑战",i[2])
