#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breath;
    char x;
};

int main(){
    
    // making a rect.
    struct Rectangle r1 = {10,5};

    r1.length = 15;
    r1.breath =  7;


    // displaying
    cout << r1.length << endl;
    cout << r1.breath << endl;


    return 0;
}