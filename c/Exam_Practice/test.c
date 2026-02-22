#include <stdio.h>
#include <stdbool.h>
int main(){
    char str[100];
    printf("Enter a text : ");
    scanf("%[^\n]s",str);
    puts(str);
    return 0;
}