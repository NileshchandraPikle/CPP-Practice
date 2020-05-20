
#include <iostream>
#include <typeinfo>
using namespace std;

float mult(int d, float e)
{
    return d*e;
}
int main()
{
    /* Automatic Keyword: Very useful in lambda expression and templates
    
    1. Automatically identifies the data type of the variable
    2. Data type depends on r-value/initializer
    3. initializer can be simple numerical value, expression or a function returning value
    4. initializer is MUST without it compiler willl throw error 
    
    Type Qualifiers:
    1. constant
    2. volatile
    3. Mutable 
    
    Storage Classes:
    1. auto
    2. register
    3. extern
    4. static 
    */
    
    auto d = 8.8;
    auto e = 8;
    auto x = mult(d,e);
    cout<<"x: "<<x<<"\n";
    cout<<typeid(x).name()<<"\n";
    
    // 1. Important:
    
    const int g = 9;
    auto c = g; //constant qualifier is discarded when assined to c. here c is not cosntant hence can update
    c = 90;// valid
    
    //If you want to make c to be constant then use: const auto c = 90;
    
    auto &ref = g; // Here qualifier is retained in ref i.e. ref is also a constant
    ref = 99;//invalid
    
    auto ptr = &g; // Here ptr is pointer to constant integer i.e. qualifier is retaind Here
    *ptr = 0; // Invalid
    
    /* Avoid auto while initializing pointers or references*/
    
    
    
    //2. 
    return 0;
}
