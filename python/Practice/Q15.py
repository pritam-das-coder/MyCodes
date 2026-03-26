# Demonstrate the difference between global and local variables by writing a function that attempts to modify a global counter variable.

c = 0 # Global Variable

def change():
    c+=1 # Local Variable

def change2():
    global c
    c+=1

print(c) # 0
change2()
print(c) # 1

