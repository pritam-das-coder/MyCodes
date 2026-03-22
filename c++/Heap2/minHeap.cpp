#include <iostream>
using namespace std;
class MinHeap{
public:
    int arr[100];
    int idx;
    MinHeap(){
        idx=1;
    }
    void push(int val){
        int i=idx;
        arr[idx]=val;
        idx++;
        while(i!=1 && arr[i]<arr[i/2]){
            swap(arr[i],arr[i/2]);
            i=i/2;
        }
    }
    int top(){
        return arr[1];
    }
    int size(){
        return idx-1;
    }
    void pop(){
        if(idx==1){
            cout<<"Empty Heap"<<endl;
            return;
        }
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while(true){
            int left=2*i,right=2*i+1;
            int minimum=min(arr[left],arr[right]);
            if(left>=idx) break;
            else if(right>=idx){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            else if(minimum<arr[i]){
                if(arr[left]<arr[right]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else{
                    swap(arr[i],arr[right]);
                    i=right;
                }
            }
            else break;
        }
    }
    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MinHeap mh;
    mh.push(10);
    mh.push(20);
    mh.push(11);
    mh.push(30);
    // cout<<mh.top()<<endl;
    mh.push(40);
    mh.push(12);
    mh.push(4);
    mh.push(7);
    mh.push(2);
    mh.display();
    // cout<<mh.top()<<endl;
    // cout<<mh.size()<<endl;
    mh.pop();
    mh.pop();
    mh.display();
    // cout<<mh.size()<<endl;
}