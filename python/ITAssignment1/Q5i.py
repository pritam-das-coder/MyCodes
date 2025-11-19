# Perform string concatenation, reverse, upper and lower case convert with python.
# string concatenation
s1=input('Enter 1st string : ')
s2=input('Enter 2nd string : ')
res_string=s1+s2
print('Concatenated string :',res_string)
# reverse
l=len(s1)
reverse_String=''
for i in range(l-1,-1,-1):
    reverse_String+=s1[i]
print('Reversed 1st String :',reverse_String)
# upper and lower case convert
print('1st string after converting to uppercase :',s1.upper())
print('1st string after converting to lowercase :',s1.lower())