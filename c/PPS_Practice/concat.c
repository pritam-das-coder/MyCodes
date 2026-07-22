#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline character if present
    int i=0;
    while (s1[i] != '\0') {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
        i++;
    }
    
    int l1=strlen(s1),l2=strlen(s2);
    i=0;
    int idx=l1;
    while(i<l2){
        s1[idx]=s2[i];
        idx++,i++;
    }
    puts(s1);
    return 0;
}