#include <iostream>
#include <climits>
using namespace std;
class Queue{
private:
    int arr[5];
    int f,b;
public:
    Queue(){
        f=b=-1;
    }
    void push(int val){
        int n=sizeof(arr)/sizeof(arr[0]);
        if(b==n-1){
            cout<<"Queue is Full!"<<endl;
        }
        else if(f==-1){ // empty
            f=b=0;
            arr[0]=val;
        }
        else{
            b++;
            arr[b]=val;
        }
    }
    void pop(){
        if(f==-1){
            cout<<"Queue is Empty"<<endl;
        }
        else if(f==b){
            f=b=-1;
        }
        else{
            f++;
        }
    }
    int front(){
        if(f==-1) return INT_MIN;
        return arr[f];
    }
    int back(){
        if(f==-1) return INT_MIN;
        return arr[b];
    }
    int size(){
        if(f==-1) return 0;
        return (b-f+1);
    }
    bool empty(){
        return (f==-1);
    }
    void display(){
        if(f==-1){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        for(int i=f;i<=b;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Queue q;
    // cout<<q.empty();
    q.push(1);
    q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // cout<<q.size()<<endl;
    // cout<<q.empty();
    q.display();
    q.pop();
    q.pop();
    // q.push(6);
    q.display();
    cout<<q.front()<<endl;
}