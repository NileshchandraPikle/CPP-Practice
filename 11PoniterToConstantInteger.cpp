#include <iostream>

using namespace std;

int main()
{
   int const PI = 3.145; // PI is a constant integre
   int const *p; // p is a pointer to a constant integer. 
   //const int *p; // p is a pointer to a integer constant. Both are same 
                 
   p = &PI;     // Value pointed by pointer cannot be changed
  //*p = 43;     // This will throw an error
   int y = 0;
   p = &y;       // Here pointer can point to other varaible like given below
}
