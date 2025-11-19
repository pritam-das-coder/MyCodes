#include <iostream>
using namespace std;
class ComplexNumber{
public:
    int real;
    int imaginary;
    // ComplexNumber operator +(ComplexNumber &c){
    //     ComplexNumber x;
    //     x.real=c.real+this->real;
    //     x.imaginary=c.imaginary+this->imaginary;
    //     return x;
    // }
    friend ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2);
    ComplexNumber operator -(ComplexNumber &c){
        ComplexNumber x;
        x.real=this->real-c.real;
        x.imaginary=this->imaginary-c.imaginary;
        return x;
    }
};
ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2){
    ComplexNumber x;
    x.real=c1.real+c2.real;
    x.imaginary=c1.imaginary+c2.imaginary;
    return x;
}
int main(){
    ComplexNumber cn1;
    cn1.real=3;
    cn1.imaginary=4;
    ComplexNumber cn2;
    cn2.real=5;
    cn2.imaginary=5;
    ComplexNumber cn3=cn1+cn2;
    // ComplexNumber cn4=(cn2+cn1)+cn3;
    cout<<"Real : "<<cn3.real<<" "<<"Imaginary : "<<cn3.imaginary<<endl;
    // cout<<"Real : "<<cn4.real<<" "<<"Imaginary : "<<cn4.imaginary<<endl;
    //cout<<1+2<<endl;
}