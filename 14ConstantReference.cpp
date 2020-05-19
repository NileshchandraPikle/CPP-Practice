#include <iostream>

using namespace std;

void Print(int &d)
{
    d = 999;
}

void Print1( const int &d)
{
    d = 999; // due to const keyword value of d cannot be modified
}

int main()
{
    int x = 9;
    int &p = x;// Reference is created to x
    
    Print(p); // By this value of x can be modified in functio Print
    std::cout << x << "  "<< p << std::endl;
    
    // To control value to be modiefied in function use constant keyword in function defination
    
    Print1(p); // value of p can be restricted using constant keyword
    
    Print1(4); // Due to use of constant keyword leterals are also allowed to pass
               // If constant keyword is removed from function defination then this 
               // function call results in error
               
    // Print1(int const &ref) this kind of defination widely used in passing object to the function
  
}
