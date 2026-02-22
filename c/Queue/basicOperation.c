#include <stdio.h>
#include <limits.h>
#define max 5
int a[max];
int front,rear;
void init(){
    front=rear=-1;
}
int isEmpty(){
    if(front==-1) return 1;
    else return 0;
}
void enqueue(int data){
    if(rear==max-1){
        printf("Queue is full");
        return;
    }
    rear++;
    a[rear]=data;
    if(front==-1) front=0;
}
int dequeue(){
    if(front==-1){
        printf("Queue is empty");
        return INT_MIN;
    }
    int data=a[front];
    if(front==rear) front=rear=-1;
    else front++;
    return data;
}
void printArray(){
    for(int i=0;i<=max-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    init();
    //printf("%d\n",isEmpty());
    enqueue(1);
    printArray();
    enqueue(2);
    printArray();
    enqueue(3);
    //printf("%d\n",isEmpty());
    printArray();
    enqueue(4);
    printArray();
    printf("%d\n",dequeue());
    //printArray();
    printf("%d\n",dequeue());
    //printArray();
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",isEmpty());
    printArray();
    return 0;
}