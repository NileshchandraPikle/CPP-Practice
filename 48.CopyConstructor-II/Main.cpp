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
    /*
      RULE OF 3
      If user implements any of the following all should be defined
      1. Constructor
      2. Copy constructor
      3. Copy assignment operator
    This is due to allocation of some resources into constructor
    1. Destructor will free the resources
    2. Copy constructor will perform deep copy
    3. Copy assignment also perform deep copy
    
    ** Not implementing user defined operations can lead into memory leak or shallow copy
    */
    Integer i(6);
    cout<<i.getValue()<<endl;
    
  
    Integer i2(i); // Copy constructor created here to copy member variables of i to i2
    //Here copy constructor is directly invoked       
    
    i = i2; // Here compiler will synthesize a copy constructor automatically like it synthesizes 
            // default construcor
    return 0;
}