#include<iostream>

using namespace std;
/*
  Constant qualifier
  1. Create variable that is Constant
  2. Value of Constant variable cannot be modified
  3. Attempt to modify cause error
  4. Qualified to decleartion but always need initializer
  5. Replaces C macro
  6. C macros dont have scope and hard to debug
  7. Macros dont have data type 
  8. Const qualifier most commonly used with references when arguments are pass by
     reference into a function
*/

int main()
{
    
    const int PI = 3.14f;
    // PI allows to make change and one place and reflect at other Replaces
    // const avoids accidental updation of PI value by other programmers
    
    float radius = 3.2f;
    float area = radius * radius * PI;
    cout<<"area = "<<area;
   
}