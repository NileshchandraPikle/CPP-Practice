#include <iostream>

using namespace std;

int main()
{
  //int * const p; // p is a constant pointer to integer. 
                 // This will throw error as p is constant pointer must be initialised
                 
  int a = 89;
  int *const p = &a; // Here p cannot point another variable as it is edclared as constant pointer
                     // However value of a can be changed
  a = 99;  // Valid
  *p = 78; // Valid
  int b = 9; 
 // p = &b; // Invalid
  
  
}
