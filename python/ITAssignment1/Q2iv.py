# Find roots of Quadratic Equation and show all condition clearly in program.
a=int(input('Enter the coefficient of x square in your quadratic equation : '))
b=int(input('Enter the coefficient of x in your quadratic equation : '))
c=int(input('Enter the constant term in your quadratic equation : '))
discriminant=b*b-4*a*c
if discriminant==0:
    print('Roots are real and equal')
    root=-b/2*a
    print('Roots are',root,'and',root)
elif discriminant>0:
    print('Roots are real and distinct')
    root1=(-b+discriminant**(1/2))/(2*a)
    root2=(-b-discriminant**(1/2))/(2*a)
    print('Roots are',root1,'and',root2)
else:
    print('Roots are imaginary')
    root1=(-b+discriminant**(1/2))/(2*a)
    root2=(-b-discriminant**(1/2))/(2*a)
    print('Roots are',root1,'and',root2)