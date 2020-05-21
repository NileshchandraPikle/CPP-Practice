
#include <iostream>

using namespace std;
/*
   For loop vs range based for loop
   
   for loop:
   1. Index based iteration
   2. requires end condition
   3. Index variable is increamented or decreamented
   4. Error prone: syntax error, overflow, underflow,  incorrect iteration etc.
   5. Use for finer control over array 
   6. more control over iteration
   
   range based for loop:
   1. No index based iteration
   2. No terminating condition required
   3. No need for increament or decreament
   4. Less error prone
   5. Less control over iteration
   6. cannot stop iteration in between 


*/
int main()
{
   /*Range Based For Loop*/
   int arr[] = {1,2,3,4,5,6,7,8,9};
   /*Normal For Loop*/
   for(int i = 0; i < 9; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<" \n";
   /*Range Based For loop*/
   
   for(int x:arr) // Here copy of array element is created for each element and stored in x
   {
       cout<<x <<" "; 
   }
   cout<<" \n";
   for(int &x:arr) // To avoid copy of array element use reference to the array element 
   {
       x = x+2; // here we can update value of array using reference x 
       cout<<x <<" "; 
   }
    cout<<" \n";
   for(auto &x:arr) // If you don't know type of array then auto keyword can be used 
   {
       x = x+2; // here we can update value of array using reference x 
       cout<<x <<" "; 
   }
    cout<<" \n";
   for(const auto &x:arr) // You can restrict updation of array by const keyword 
   {
      // x = x+2; // This is invalid as reference x is const
       cout<<x <<" "; 
   }
   
   /*Range based for loop can also be applied over initializer list*/
    cout<<" \n";
   for(auto x:{1,2,3,4,5,6})
   {
        cout<<x <<" "; 
   }

    return 0;
}
