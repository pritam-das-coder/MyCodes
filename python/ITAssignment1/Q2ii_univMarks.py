#  Show Univ marks gradation system using if-else
marks=int(input('Enter the marks obtained : '))
if marks>100 or marks<0 : print('Invalid Input')
else:
    grade=''
    if marks>=90: grade='O'
    elif marks>=80: grade='E'
    elif marks>=70: grade='A'
    elif marks>=60: grade='B'
    elif marks>=50: grade='C'
    elif marks>=40: grade='D'
    else: grade='F'
    print(grade)