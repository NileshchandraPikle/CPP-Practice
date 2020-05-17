#include<iostream>

using namespace std;

int main()
{
 /*NULL is a “manifest constant” (a #define of C) that’s actually an integer that can 
   be assigned to a pointer because of an implicit conversion.
   nullptr is a keyword representing a value of self-defined type, 
   that can convert into a pointer, but not into integers.*/

    int i = NULL; // OK
    int i = nullptr; // error - not a integer convertible value
    int* p = NULL; //ok - int converted into pointer 
    //warning: converting to non-pointer type ‘int’ from NULL [-Wconversion-null]
    int* p = nullptr; // ok

/*That, is important to solve an ambiguity that can arise in generic programming:
  suppose you have two functions in overload:*/

    void func(int x);
    void func(int* x);

 /* Now, if you call func(NULL), you are actually calling … the 1) variant, being NULL an int. 
    But func(nullptr) will call the 2) variant, being nullptr not an int.
    To avoid the risk to call one function instead of another, 
    always use 0 if you want an integer, and nullptr if you want a pointer.*/
    return 0;
}