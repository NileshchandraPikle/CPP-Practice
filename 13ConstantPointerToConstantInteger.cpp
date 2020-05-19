#include <iostream>

using namespace std;

int main()
{
    const int PI = 90;
    const int * const p = &PI; // p is a constant pointer to constant integer
   
    *p = 98;     //Invalid as p is poointing to constant integer PI and value of PI cannot be changed
     int b = 88;
     p = &b;     // p cannot point to other address as p is a constant pointer already poointing to PI 
  
  
}
