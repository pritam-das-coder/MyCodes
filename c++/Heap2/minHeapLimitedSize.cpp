#include <iostream>
#include <vector>
using namespace std;
class MinHeap {
public:
    vector<int> arr;
    int idx; // value to be stored
    int capacity;
    MinHeap(int s){ 
        idx=1;
        capacity=s+1;
        // vector<int> v(s);
        // arr=v;
        for(int i=1;i<=capacity;i++){
            arr.push_back(0);
        }
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        if(idx==capacity){
            cout<<"Heap is Full"<<endl;
            return;
        }
        arr[idx] = val;
        idx++;
        int i=idx-1;
        while (i!=1&&arr[i/2]>arr[i]){
            swap(arr[i/2],arr[i]);
            i=i/2;
        }
    }
    void pop() {
        if(idx==1){
            cout<<"Heap is Empty"<<endl;
            return;
        }
        // TODO: Avoid
        // arr[1] = arr[idx - 1];
        // idx--;
        // int i = 1;
        // int l = 2 * i, r = 2 * i + 1;
        // while (l < idx && ((r >= idx && arr[i] > arr[l]) || (r < idx && arr[i] > min(arr[l], arr[r])))) {
        //     if ((r >= idx && arr[i] > arr[l]) || arr[l] < arr[r]) {
        //         swap(arr[l], arr[i]);
        //         i = l;
        //     } 
        //     else {
        //         swap(arr[r], arr[i]);
        //         i = r;
        //     }
        //     l = 2 * i;
        //     r = 2 * i + 1;
        // }
        idx--;
        arr[1]=arr[idx];
        // rearrangement
        int i=1;
        while(true){
            int l=2*i,r=2*i+1;
            if(l>=idx) break;
            else if(r>=idx){
                if(arr[i]>arr[l]) swap(arr[l],arr[i]);
                break;
            }
            else if(arr[i]>min(arr[l],arr[r])){
                if(arr[l]<arr[r]){
                    swap(arr[l],arr[i]);
                    i=l;
                }
                else{
                    swap(arr[r],arr[i]);
                    i=r;
                }
            }
            else break;
        }
    }
    int size(){ 
        return idx-1; 
    }
    void print() {
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    MinHeap a(4);
    a.push(10);
    a.push(20);
    cout<<a.top()<<" "<<a.size()<<endl;
    a.push(11);
    a.push(2);
    a.push(9);
    cout<<a.top()<<" "<<a.size()<<endl;
    a.print();
    a.pop();
    cout<<a.top()<<" "<<a.size()<<endl;
    a.print();
}