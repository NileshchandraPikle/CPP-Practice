
#include <iostream>

using namespace std;
/* 
  inline functions:
  1. Used to reducce function calling, returning point, stack memory allocation overhead of a function
  2. One way is we can use macro but macros are error prone
  3. inline function request compiler to expand the function call to the body of the function 
  4. inline defined function is not called but expanded at place where it is called 
  5. function is marked with inline keyword
  6. such functions are defined in header file
  7. May improve the performance of the code 
  8. Certain functions may not be inlined
     - large functions
     - functions having too many conditional statements
     - recursive functions
     - functions invoked through pointers 
     - Modern compilers are well optimized they may even inline non inline functions 
*/

#define SQUARE(x) x*x // This will evaluate wrong expression if we pass SQUARE(x+1) as x+1*x+1
inline int square(int s) 
{
    return s*s;
}

int main()
{
    int sqr = square(4); // This has overheads of function calling, returning point, stack memory allocation
}
