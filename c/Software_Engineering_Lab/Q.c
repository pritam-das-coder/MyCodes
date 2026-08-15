// Purpose of Program : Coding Guidelines

// Name : Pritam Das
// Roll Number : 48
// Department : CSE

#include <stdio.h>

int factorial(int n) // for factorial
{ 
    int f = 1;
    for(int i = 1;i <= n;i++)
        f = f * i;
    return f;
}

void checkEvenOrOdd(int b) // for checking even or odd
{
    if(b % 2 == 0)
        printf("b is even\n");
    else
        printf("b is odd\n");
}

int main()
{
    int a,b,c,d,i,f=1;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    c = a + b;
    printf("c is %d\n",c);

    c = a * b;
    printf("c is %d\n",c);

    f = factorial(a);

    d = (a * a) - (b * b *b);
    i = a / b;
    
    checkEvenOrOdd(b);
}