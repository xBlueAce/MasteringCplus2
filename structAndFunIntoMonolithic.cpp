/*
example of revising the monolithic program with function and structures



Carlos Agustin 
March 30, 2021
*/

// Example program
#include <iostream>
#include <string>

using namespace std;



struct Rectangle{
    int len;
    int wid;
};

// initializing the rectangle with values.
void init(struct Rectangle *r, int l, int w){
r->len  = l;
r->wid  = w;
}

// returns area
int area (Rectangle r){
    return r.len * r.wid;
}

// returns perimeter
int perimeter(Rectangle r){
    return 2 * (r.len + r.wid);
}


int main()
{
  Rectangle r ={0,0};
  
  int l,b;
  cout << "Enter length and width\n>>";
  cin >> l >> b;
  
  init(&r,l,b);
    
    
    
    cout << "Area = " << area(r) << endl
        << "Perimeter = " << perimeter(r) << endl;
        
    return 0;
}
