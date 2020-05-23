#include <iostream>

using namespace std;

int main()
{
    /*
      Dynamic memory allocation for arrays
      
    */
   int *p = new int[5]; // This allcates memory for an array of 5 integers
   
   for(unsigned int i = 0; i < 5; i++)
   {
       p[i] = 9;
       std::cout << p[i] << std::endl;
   }
   delete [] p; // delete memory allocated for entire array 
   // delete p; // This deallocates only first memory of array p 
    return 0;
}
