#include <iostream>
using namespace std;
struct Rect{
    int l_;
    int b_;
};

int main(){
    
    int a = 10;
    
    // creating pointer
    int * p;

    // storing the address of 'a' in 'p'
    p = &a;

    cout << a ;
    cout << "\n\nusing pointer\n"
        << "address: " << p  //  prints out = 0x61fe14
        << "\nvaule: " << *p << endl << endl; // prints out = 10



    int A[5] = {2,4,6,8,10};
    int * q;
    q = A;


    for(int i  =0 ; i < 5; i++){
        cout << A[i] ;
    }
    cout << endl;

    for(int i = 0 ; i < 5; i++){
        cout << q[i] ;
    }
    cout << endl;

    int *c;
    c = new int[5]; // dynamic allocating memory

    c[0]=10;
    c[1]=20;
    c[2]=30;
    c[3]=40;
    c[4]=50;

    delete[] c; // remember to delete.
    ///////////////////////////////////////
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rect *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;



    return 0;
}