# Write program to count no of occurrences of character in a string.
str=input('Enter a string : ')
ch=input('Enter the character to count : ')
count=0
for c in str:
    if(c==ch): count+=1
print(f'No. of occurences of \'{ch}\' in {str} is {count}')