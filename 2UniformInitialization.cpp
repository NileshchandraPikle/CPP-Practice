
#include <iostream>


using namespace std;

// Prgram for uniform initialization

int main()
{
 
   
/* Prior to C++ 11
   
int a; //uninitialized
   
int a2 = 0; // copy initialization
   
int a3(5); // Direct initialization
   
   
char c[8]; // uninitialized
   
char c[8] = {"Hello"}//copy initialization
   
char c[8] = {'a','b','c'}; // Aggregate initialization
*/



// C++ 11 onwards uniform initialization



int i {};// uninitialized
int 
i1 {0};// initialized to zero

int a[]{0,1,2,3,4};// Aggregate initialized



// Dynamic memory allocation and initialization


int *p = new int{};// Dynamic initialization

int *p2 = new int[8]{}; //Dynamic initialization of size 8

int *p3 = new int [8] {1,2,3,4,4,5}; // This(Dynamic allocation + initialization) was not possible prior to c++

}
