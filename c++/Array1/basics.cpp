// #include <iostream>
// using namespace std;
// int main(){
//     // int arr[]={1,2,3,4,5,9};
//     // arr[4]=7;
//     // cout<<arr[4];
//     // for(int i=0;i<6;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    cout <<"enter 5 elements of the array" << endl;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int x = 1;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}