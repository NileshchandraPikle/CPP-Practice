
#include <iostream>

using namespace std;
/*
 Pointer to a function:
 1. Pointr that holds address of a function
 2. Type is same as the signature of the function
 3. Can be used to indirectly invokde the function even if name is not known
 4. Used by algorithms and classes for customization
 
 Syntax: 
 
 <ret> (*fnptr) (args) = &function
 
 eg. int (*addPtr)( int, int) = &add // int add(int, int ) is a function 
 
*/
void Print(int count, char c)
{
    for(unsigned int i = 0; i < count; i++)
    cout<<c;
    
    cout<<endl;
}
int main()
{
    Print(6,'#');
    
    void (*ptr) (int , char) = &Print;
    //void (*ptr) (int , char) = Print;\\ here & is optional
    
    (*ptr)(5,'*');  // Calling to Print function using pointer 
    ptr(5,'@');     // We can call the function like normal also
    
}
