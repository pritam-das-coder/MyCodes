// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter size of string : ");
//     scanf("%d",&n);
//     char ch;
//     scanf("%c",&ch);
//     char str[n+1];
//     printf("Enter a string : ");
//     gets(str);
//     char rev[n+1];
//     for(int i=0;i<n;i++){
//         rev[i]=str[n-1-i];
//        // printf("%c",str[n-1-i]);
//     }
//     rev[n]='\0';
//     puts(rev);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    puts("Enter the size of string : ");
    scanf("%d",&n);
    char ch;
    scanf("%c",&ch);
    char str[n];
    puts("Enter a string : ");
    gets(str);
    puts("The reverse string is ");
    for(int i=n-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}