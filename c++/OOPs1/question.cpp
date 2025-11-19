// Create a class ‘book’ with name, price and number of 
// pages as its attributes. The class should contain following 
// member functions : 
// ● countBooks(int price) : This function will return count of all 
// the books that have a price less than the given price.
// ● isBookPresent(string title) : This will return a boolean value 
// indicating whether any book with the given title exists or not.
#include <iostream>
using namespace std;
class Book{
    public:
    string name;
    int price;
    int noOfPages;
    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isBookPresent(string title){
        return (title==name);
    }
};
int main(){
    Book b1;
    b1.name="The Gitanjali";
    b1.noOfPages=1200;
    b1.price=1000;
    cout<<b1.countBooks(1300)<<endl;
    cout<<b1.isBookPresent("The Gitanjali")<<endl;
}