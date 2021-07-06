#include <iostream>
using namespace std;

struct Rect{
    int l_;
    int b_;
};

int add(int a, int b){

    return a + b;
}

int main(){

    Rect r = {1,2};
    
    cout << "Length = " << r.l_ << endl;
    cout << "breath = " << r.b_ << endl;

    //displaying
    Rect *pr = &r;
    cout << "Length = " << pr->l_ << endl;
    cout << "breath = " << pr->b_ << endl;

    cout << endl;
    Rect *dP;
    dP = new Rect;
    dP->b_ = 10;
    dP->l_ = 20;
    cout << "displaying dynmaic\n";
    cout << "Length = " << dP->l_ << endl;
    cout << "breath = " << dP->b_ << endl;

    return 0;

}