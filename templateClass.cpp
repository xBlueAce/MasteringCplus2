/*
template creating

learning on implementing and using templates
*/
#include <iostream>
using namespace std;

template<class T>
class Arithmetic{
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
private:
    T a;
    T b;
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add(){
    return a + b;
}

template<class T>
T Arithmetic<T>::sub(){
    return b-a;
}

int main(){
    //int a = 1, b =3;
  Arithmetic<int> ar(1,3);
  cout << "add = " << ar.add() << endl;
  cout << "sub = " << ar.sub() << endl;
  
  Arithmetic<double> ar2(3.45,1.54);
  cout << "add = " << ar2.add() << endl;
  cout << "sub = " << ar2.sub() << endl;
 
    return 0;
}
