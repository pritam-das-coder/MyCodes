# include <stdio.h>
# include <limits.h>
# define max 8
int a[max];
int front,rear;
void init(){
    front=rear=-1;
}
int isEmpty(){
    return (front==-1);
}
void enqueue(int data){
    if((front==0 && rear==max-1) || (rear+1==front)){
        printf("Queue is full\n");
        return;
    }
    rear=(rear+1)%max;
    a[rear]=data;
    if(front==-1) front=0;
}
int dequeue(){
    if(isEmpty()){
        printf("Queue is empty\n");
        return INT_MIN;
    }
    int data=a[front];
    if(front==rear) front=rear=-1;
    else front=(front+1)%max;
    return data;
}
void printArray(){
    if(isEmpty()){
        //printf("Queue is empty");
        return;
    }
    for(int i=front;;i=(i+1)%max){
        printf("%d ",a[i]);
        if(i==rear){
            printf("\n");
            return;
        }
    }
}
int main(){
    init();
    printf("Menu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    int flag=1;
    while(flag){
        printf("Enter your choice : ");
        int ch;
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter a number : ");
                int n;
                scanf("%d",&n);
                enqueue(n);
                printf("Inserted Element : %d\n",n);
                break;
            case 2:
                printf("Deleted Element : %d\n",dequeue());
                break;
            case 3:
                printArray();
                break;
            case 4:
                flag=0;
                printf("Exiting....");
                break;
            default:
                printf("Invalid Input");
        }
    }
    return 0;
}