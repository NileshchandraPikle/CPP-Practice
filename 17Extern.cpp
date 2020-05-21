
#include <iostream>
#include <typeinfo>
using namespace std;
void add(); // Declaration as extern by default for functions
void add(); // Declaration as extern by default for functions
extern int var; // Declaration as extern ffor variable BUT NOT DEFINED
extern int var; // Declaration as extern ffor variable BUT NOT DEFINED

//Note: extern variables can be declared any number of times but defined only once

void add() // This is definition of function add. It cannot be redefined
{
  cout<<"\n Add definition \n";
} 
int main()
{
    /*
      Storage class:
      C++ uses 5 stora
      ge classes, namely:
    1. auto
    2. register
    3. extern
    4. static
    5. mutable
    
    
    */
}

/*
CASE1: 
int var; 
int main(void) 
{ 
   var = 10; 
   return 0; 
} 
=> When we say int var; it is defined as well as declared (implicitly) globally.
=> When defined memory is allocated, If declared no memory is allocated
=> The above program works defined

CASE2:
extern int var; 
int main(void) 
{ 
  return 0; 
} 
=> Here var is declared but not defined so no memory is allocated
=> As it has not been accessed from main so no error occurs
=> Above program works fine 

CASE3:
extern int var; 
int main(void) 
{ 
  var = 10; 
  return 0; 
} 
=> Here var is declared but not defined so no memory is allocated
=> Here undefined variable var is accessed from main i.e. we tried to assign 10 value to
   variable var for which memory is not allocated yet 
=> Above program thows error 

CASE4:
#include "somefile.h" 
extern int var; 
int main(void) 
{ 
 var = 10; 
 return 0; 
} 
=> Here var is declared but not defined so no memory is allocated
=> If we assume var is defined in somefile.h i.e. this header file contains (int var;) then this program works fine.

CASE5:
extern int var = 0; 
int main(void) 
{ 
 var = 10; 
 return 0; 
} 
=> Here var is declared and defined both
=> Hence program works fine


    1. A declaration can be done any number of times but definition only once.
    2. the extern keyword is used to extend the visibility of variables/functions.
    3. Since functions are visible throughout the program by default, the use of extern is not needed in function declarations or definitions. Its use is implicit.
    4. When extern is used with a variable, it’s only declared, not defined.
    5. As an exception, when an extern variable is declared with initialization, it is taken as the definition of the variable as well.


   Functions:
   
   main.cpp
   
   #include<iostream>
   #include<header.h>
   
   int main()
   {
    int a,b,c;
    c = Addition(a,b);
    // By refering declaration of Addition() Function from header.h call for Addition() is add.cpp is done
    return 0;
   }
   
   
   header.h 
   
   int Addition(int, int); // This is declaration in header file no memory is allocated and by default extern
   
   
   add.cpp
   
   int Addition(int a, int b) // This is definition and memory is allocated
   {
       return a+b;
   }
   
   
   
*/
