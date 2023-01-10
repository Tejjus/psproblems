def check(x1, x2):
    if x1==x2:
        return True
    return False

x = input("Enter string 1: ")
y = input("Enter string 2: ")
print("yes" if check(x,y) else "no")