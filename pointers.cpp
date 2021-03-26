#include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    
    // creating pointer
    int * p;

    // storing the address of 'a' in 'p'
    p = &a;

    cout << a ;
    cout << "\n\nusing pointer\n"
        << "address: " << p  //  prints out = 0x61fe14
        << "\nvaule: " << *p; // prints out = 10

    return 0;
}