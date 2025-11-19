#include <stdio.h>
#include <string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noOfPages;
    }first,second;

    strcpy(first.name,"Total History");
    first.noOfPages=166;
    first.price=300.5;

    strcpy(second.name,"Selina Physics");
    second.noOfPages=209;
    second.price=407;

    puts(first.name);
    printf("%d\n",first.noOfPages);
    puts(second.name);
    printf("%f\n",second.price);
    
    return 0;
}