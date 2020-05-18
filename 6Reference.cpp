#include<iostream>

using namespace std;

int main()
{
    /*
      Reference:
      1. Defines an alternative name for variable
      2. Created with & operator during declaration
      3. Always needs an initializer
      4. The referent should be variable e.g int &ref = 90; is not allowed
      5. It is bound to its referent
      6. Reference is not another variable it is just another name
      7. It can be used to modify variable indirectly
      8. Reference must be initialized e.g. int &ref; is not allowed
      
      
     Reference                                                Pointer
     1. Always needs initializer                            1. initializer is optional
     2. initializer must be lvalue (variable)               2. initializer need not be l-value
     3. Cannot be nullptr                                   3. can be nullptr
     4. Throuhout lifetime it is bound to referent          4. It can point to other variables
     5. No storage required                                 5. Requires storage
     6. Dereference is not required                         6. Dereference is required
    */ 
    
    int x = 10; // Memory for x is allocated in RAM and 10 value is stored
    int &ref = x; // here x is s referent and ref is Reference
    
    cout<<" adress of x = "<<&x<<" \n &ref is "<<&ref<<"\n";
    cout<<" Value of x = "<<x<<" \n ref is "<<ref<<"\n";
    
    x = 89;
    // &ref = 0; This will result in error as referent must be variable
    ref = 90;
    cout<<"\n If u change one of the value it will reflect in both\n";
    cout<<" Value of x = "<<x<<" \n ref is "<<ref<<"\n";
    int y = 909;
    ref = y;// This will assigne valye of y to ref. It will not bind ref to y varaible
    cout<<" Value of x = "<<x<<" \n ref is "<<ref<<"\n";
    
}
/*
Use references

    In function parameters and return types.

Use pointers:

    Use pointers if pointer arithmetic or passing NULL-pointer is needed. For example for arrays (Note that array access is implemented using pointer arithmetic).
    To implement data structures like linked list, tree, etc and their algorithms because to point different cell, we have to use the concept of pointers.
*/