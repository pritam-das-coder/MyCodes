// Write a program to count the number of words in a string.
#include <stdio.h>
#include <string.h>
int main()
{ // main function
    char str[100];
    puts("Enter a string : "); // printing a string
    gets(str); // taking input
    char space[] = " ";
    strcat(str, space); // concats a space at end of str string
    int size = strlen(str); // find length of str string
    int c = 0;
    // finding total no. of words in str
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            c++;
        }
    }
    printf("The number of words in given string is %d", c); // printing a string
    return 0;
}