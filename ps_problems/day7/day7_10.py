def freq(c, x):
    count=0
    for i in x:
        if i==c:
            count+=1
    return count
x = input("Enter string: ")
l = {}
for i in x:
    if i not in l.keys():
        l[i] = freq(i,x)
for i in l.keys():
    print(i,":",l[i])