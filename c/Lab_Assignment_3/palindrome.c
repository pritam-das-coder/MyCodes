// Write a C program to check whether a given string is palindrome or not(Do not use strcpy())
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() // main function
{
    char str[50];
    printf("Enter a string : ");
    gets(str); // taking input
    int size = strlen(str); // find length of str
    bool flag = true; // assume str is palindrome
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        { // if ith & jth character do not match str is not palindrome
            flag = false;
            break;
        }
    }
    printf(str);
    if (flag)
        printf(" is palindrome.");
    else
        printf(" is not palindrome.");
    return 0;
}