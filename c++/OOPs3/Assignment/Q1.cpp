// Create a class ‘date’ that contains three members namely date, month and year. Create 2 objects of this
// class with different dates and now compare the two. If the dates are equal then display
// message as "Equal" otherwise "Unequal". Use Getters & Setters.
// *Note : The function should be a member function of this class.
#include <iostream>
using namespace std;
class Date{
private:
    int date;
    int month;
    int year;
public:
    Date(int date,int month,int year){
        this->date=date;
        this->month=month;
        this->year=year;
    }
    int getDate(){
        return date;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    void setDate(int d){
        date=d;
    }
    void setMonth(int m){
        month=m;
    }
    void setYear(int y){
        year=y;
    }
    void check(Date x){
        if(x.date==date && x.month==month && x.year==year) cout<<"Equal"<<endl;
        else cout<<"Unequal"<<endl;
    }
};
int main(){
    Date d1(10,10,2025), d2(10,10,2025);
    d1.check(d2);
}