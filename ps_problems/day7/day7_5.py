def switcheroo(x):
    y = ""
    for i in x:
        if i.isalpha():
            if i.islower():
                y+=i.upper()
            elif i.isupper():
                y+=i.lower()
        else:
            y+=i
    return y

x = input("Enter string: ")
print(switcheroo(x))