#include <iostream>
using namespace std;

int * fun(int size){
    int *p;
    p = new int[size];

    //setting the array
    for(int i =0;i< size;i++){
        p[i] = i+1;

    }

    return p;
}

int main(){
    int *ptr, size =7;

    ptr = fun(size);

    //printing the array
    for(int i = 0; i < size; i++){
        cout << i <<endl;
    }

}