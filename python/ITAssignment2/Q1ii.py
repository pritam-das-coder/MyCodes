#  Perform String reverse operation without function. 
str=input("Enter a string : ")
new_str=""
for i in range(len(str)-1,-1,-1):
    new_str+=str[i]
print(f"Reversed String : {new_str}")
# Enter a string : Great Britain
# Reversed String : niatirB taerG