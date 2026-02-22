#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
// Multiplies number x with the number represented by result[]
int multiply(int x, vector<int>& result) {
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;      // Store last digit of prod in result
        carry = prod / 10;          // Carry forward remaining digits
    }

    // Store remaining carry digits
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return 0;
}

// Computes factorial and stores in result[]
void factorial(int n) {
    vector<int> result;
    result.push_back(1);  // Initialize result as 1

    for (int x = 2; x <= n; x++)
        multiply(x, result);

    // Print result in reverse
    cout << "Factorial of " << n << " is:\n";
    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];
    cout << endl;
}

// Driver code
int main() {
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // factorial(n);
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    multiply(111,v);
    display(v);
    return 0;
}
