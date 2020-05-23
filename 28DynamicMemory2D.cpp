
#include <iostream>

using namespace std;

int main()
{
 
   int **row = new int *[5]; // creates an array row which contaisn pointers hence double pointer 
   
   for(unsigned int i = 0; i < 5; i++)
   {
       row[i] = new int [5]; // for every row pointer memory of size 5 is allocated dynamically
   }
   
   for(unsigned int i = 0; i < 5; i++)
   {
       for(unsigned j = 0; j < 5; j++)
       {
           row[i][j] = i;
           std::cout << row[i][j] << " ";
       }
       std::cout<<endl;
   }
    return 0;
}
