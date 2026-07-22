#  Check whether a triangle is valid or not in terms of side and angle.
print('MENU')
print('1. Side-Based Validation')
print('2. Angle-Based Validation')
print('Enter your choice : ')
ch=int(input())
match ch:
    case 1:
        a=int(input('Enter 1st side : '))
        b=int(input('Enter 2nd side : '))
        c=int(input('Enter 3rd side : '))
        if a+b>c and b+c>a and a+c>b: print('A triangle with these sides is valid')
        else: print('A triangle with these sides is invalid')
    case 2:
        a=int(input('Enter 1st angle in deg : '))
        b=int(input('Enter 2nd angle in deg : '))
        c=int(input('Enter 3rd angle in deg : '))
        if (a+b+c)==180: print('A triangle with these angles is valid')
        else: print('A triangle with these angles is invalid')
    case _:
        print('Invalid Input.')