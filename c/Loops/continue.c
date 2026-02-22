//  WAP to print odd numbers from 1 to 100
#include <stdio.h>
int main()
{
    // for(int i=1;i<=100;i++){
    //     if(i%2==0)
    //     continue;
    //     printf("%d ",i);
    // }
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
            break;
        else
            printf( "\n%d %d", x, y);
        x--;
        y++;
    }
    return 0;
}