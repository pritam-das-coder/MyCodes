def add(st):
    idx=st.index('+')
    a=int(st[:idx])
    b=int(st[idx+1:])
    sum=a+b
    print(sum)

def subtract(st):
    idx=st.index('-')
    a=int(st[:idx])
    b=int(st[idx+1:])
    sub=a-b
    print(sub)

def multiply(st):
    idx=st.index('*')
    a=int(st[:idx])
    b=int(st[idx+1:])
    mul=a*b
    print(mul)

def division(st):
    idx=st.index('/')
    a=int(st[:idx])
    b=int(st[idx+1:])
    div=a/b
    print(div)

s=input()
if '+' in s: add(s)
elif '-' in s: subtract(s)
elif '*' in s: multiply(s)
elif '/' in s: division(s)
else: print('Invalid Input')