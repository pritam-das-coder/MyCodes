// Write a C program where the output will be as given below
// Input: Kalyani Government Engineering College
// Output: KGEC
#include <stdio.h>
#include <string.h>
int main()
{ // main function
    char str[100];
    puts("Enter a sentence : ");
    gets(str); // taking input
    char space[] = " ";
    strcat(str, space); // concats a space to end of str string
    // int x=strlen(str);
    // str[x]=' ';
    // str[x+1]='\0';
    int size = strlen(str); // calculates length of modified str
    int k = 0; // stores starting letter of each word
    for (int i = 0; i < size; i++) // finding initials of word
    { 
        if (str[i] == ' ')
        {
            char ch = str[k];
            printf("%c", ch);
            k = i + 1;
        }
    }
    return 0;
}
