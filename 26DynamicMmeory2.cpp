#include <iostream>

using namespace std;

int main()
{
    /*
      Dynamic memory allocation
      C++ provides different types of memory areas
      1. stack allocated memory for local variables like within function
      2. data section- allocated memory for global and static data
      3. heap - Allocate at runtime (dynamic memory allocation)
      All the memory is take from process address space 
      Allocation on heap to be managed by programmer: i.e allocation and deallocation to be done by programmer
      stack and data section is Allocate at runtime
      
      C++ provides two operators for dynamic memory allocation
      1. new: Allocates memory on heap
      2. delete: deallocates memory on heap
      
      Memory allocated through new is deallocated using delete 
      Always assign nullptr to deallocated memory ptrs as it cretaes memory leak
      
      
      malloc():
      1. malloc() is a function
      2. Requires size during allocation
      3. Cannot initialize memory
      4. Cannot create object hencce cannot call constructor
      5. Returns void pointer that needs to be typecasted
      
      new:
      1. new is an operator 
      2. No need to specify size
      3. can initialize memory
      4. can call constructor
      5. returns correct type of pointer
      
      
      
      
    */

    int *p = new int; // To allocate memory of type integer
    int *ptr = new int(5); // Allocate memory and initialize with 5
    std::cout << *ptr << std::endl;
    delete p;   // To deallocate memory
    delete ptr; // To deallocate memory
    
    p = nullptr; // To avoid memory leak
    ptr = nullptr; // To avoid memory leak
    return 0;
}
