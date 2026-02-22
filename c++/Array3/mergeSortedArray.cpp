#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
vector<int> merge(vector<int> v1, vector<int> v2)
{
    int n1 = v1.size(), n2 = v2.size();
    vector<int> res(n1 + n2);
    int i = 0, j = 0, p = 0;
    while (i < n1 && j < n2)
    {
        if (v1[i] < v2[j])
        {
            res[p] = v1[i];
            i++, p++;
        }
        else
        {
            res[p] = v2[j];
            j++, p++;
        }
    }
    while (i < n1)
    {
        res[p] = v1[i];
        i++, p++;
    }
    while (j < n2)
    {
        res[p] = v2[j];
        j++, p++;
    }
    return res;
}
void mergeLeetcode(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    if (n == 0)
        return;
    if (m == 0)
        nums1 = nums2;
    vector<int> res(n + m);
    int i = 0, j = 0, p = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            res[p] = nums1[i];
            p++, i++;
        }
        else
        {
            res[p] = nums2[j];
            p++, j++;
        }
    }
    while (i < m)
    {
        res[p] = nums1[i];
        p++, i++;
    }
    while (j < n)
    {
        res[p] = nums2[j];
        p++, j++;
    }
    nums1 = res;
}
void mergeLeetcodeOptimised(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = n + m - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
int main()
{
    vector<int> v1, v2;
    cout << "Enter elements of 1st array : " << endl;
    input(v1, 5);
    cout << "Enter elements of 1st array : " << endl;
    input(v2, 5);
    // vector<int> res=merge(v1,v2);
    v1 = v2;
    display(v1);
    display(v2);
    // cout<<"Resultant Array : "<<endl;
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
}