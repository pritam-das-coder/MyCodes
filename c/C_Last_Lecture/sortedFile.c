#include <stdio.h>
#include <string.h>
int main(){
    FILE* ptr1=fopen("integers1.txt","r");
    FILE* ptr2=fopen("integers2.txt","r");
    FILE* ptr=fopen("resultant.txt","w");
    char ch;
    while((ch=fgetc(ptr1))!=EOF){
        fputc(ch,ptr);
    }
    //fputc('\n',ptr);
    while((ch=fgetc(ptr2))!=EOF){
        fputc(ch,ptr);
    }
    int arr[100],c=0;
    for(int i=0;i<100;i++){
        arr[i]=0;
    }
    while((ch=fgetc(ptr))!=EOF){
        if(ch!='\n'){
            int n=(int)ch-48;
            arr[c]=arr[c]*10+n;
        }
        else
            c++;
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr);
    return 0;
}