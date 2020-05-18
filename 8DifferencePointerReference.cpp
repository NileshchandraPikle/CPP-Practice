#include<iostream>

using namespace std;
/*
   Difference between reference and pointer
   
   1. reference can never have a nullptr value (NULL value)
   2. Pointer can have null value
   3. When a function accepts a pointer, you'll always have to check if the pointer is valid or not,
      by checking it against nullptr.
      However, functions that accept a reference don't have to perform this check. 
      
      Obviously, this means, such a function will be simpler to implement as the reference will 
      always be valid. For pointers, you'll have to perform more checks as the pointer could be 
      nullptr or invalid (also there is no easy way to check if a pointer is valid or not).
*/

void SwapByValue(int a, int b)
{
    // This function cannot swap values of a and b from main()
    // as values are 'pass by value'
    int temp = a;
    a = b; 
    b = a;
}

void SwapByPointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SwapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Print(int *p)
{
    if(p != nullptr)
    cout<<"\n using reference p = "<<*p<<"\n";
}

void PrintReference(int &p)
{
     cout<<"\n p = "<<p<<"\n";
}
int main()
{
    int a {5}, b{9};
    SwapByValue(a,b);// cannot not swap 
    cout<<a<<" "<<b<<"\n";

    SwapByPointer(&a, &b); // Can swap 
    cout<<a<<" "<<b<<"\n";
    
    SwapByReference(a,b);// Works fine
    cout<<a<<" "<<b;
    
    int p = 90;
    
    Print(&p);
    
    Print(nullptr); // If you accidently send nullptr then program will face segmentation fault
    // You must check if ptr is pointing to nullptr in the function always to avoid accidental errors
    
    PrintReference(p);
}