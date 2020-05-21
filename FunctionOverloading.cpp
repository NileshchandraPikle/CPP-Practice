
#include <iostream>

using namespace std;
/*
  Function Overloading: 
  1. Function Overloading allows us to create same function with different argument or data typedef
  2. argument should differ in type and/or number
  3. Pointers and references and qualifiers participate in oveloading
  4. Return type is not considered in Overloading
  5. Memmber functions and qualifiers participate in FO 
  6. Same implementation different behaviour 
  7. Correct implementation is chosen based on arguments
  8. This is just for programmers convinience. reduces headache of rememberign function names 
  9. This is resolved at compile time
  10. This is done by name mangling: allows linker to link the call with Correct overloaded function 
  
  C++ internally uses name mangling to rename the same function names at the time of linking
  Eg.
  
  int  f (void) { return 1; } 
  int  f (int)  { return 0; } 
  void g (void) { int i = f(), j = f(0); } 

  A C++ compiler may mangle above names to following 
  
  int  __f_v (void) { return 1; } 
  int  __f_i (int)  { return 0; } 
  void __g_v (void) { int i = __f_v(), j = __f_i(0); } 

*/
int magic(int a, int b)
{
    return a + b;
}

float magic(float a, float b)
{
    return a + b;
}
double magic(double a, double b)
{
    return a + b;
}
int main()
{
    auto m = magic(2,4);
    auto l = magic(2.4f,4.5f);
    auto k = magic(2.4,4.5);
    
    
}
