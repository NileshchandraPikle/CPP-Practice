#include<iostream>
#include"integer.h"
using namespace std;
/* WARNING: This code works fine but dengerous - reason explained in next code*/

void print(Integer g)
{
    // Here object is pass by value and copy of the object i is created and stored in g
    
    // some operation on Integer object g
}

Integer Add(int x, int y){
    return Integer(x+y);
    // Here object is returned by value and copy of the object Integer(x+y) is created
}
int main()
{
    Integer i(6);
    cout<<i.getValue()<<endl;
    
    /*
      How ti create copy of this objec i?
      1. Copy object is created when object is pass by value into a function
      2. Function returns object by value
      3. When you create manually copy of the object like 
         e.g. Integer i2(i);
         This would cause constructor to synthesize a copy constructor for our class
         even though we have not created it
    */ 
    Integer i2(i); // Copy constructor created here to copy member variables of i to i2
    //Here copy constructir is directly invoked       
    
    return 0;
}