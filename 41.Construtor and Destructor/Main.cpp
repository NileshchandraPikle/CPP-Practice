#include <iostream>
#include "car.h"
int main () {
  /* 
    1. constructor are invoked automatically during object instantiation
    2. Used for initialization
    3. Doesn't have any return type
    4. Can be overloaded
       a. Default: constructor with no arguments
                   e.g. car c; //invokes default constructor
                   Automatically synthesized by compiler if no other constructor exists
       b. parameterized:
                       constructor that accepts one or more arguments
                       used to initialize object with user defined values
                       never synthesized by compiler
                       Blocks auto generation of default constructor
                       
       c. copy
       d. delegating
       e. inheriting
       
       Destructor:
                  The function that is automatically invoked when object is destroyed
                  Used to releasing the resources that may have been allocated in constructor
                  Class can have only one destructor and cannot be overloaded
                  does not accept any argument
                  same name as class but begins with ~
                  compiler will synthesize if required if not defined by prgrammer
  */
  //Car c1;
  //c1.Dashboard();
  Car c1(5.6); // Here parameterized constructor is called
  c1.FillFuel(3.0);
  c1.Accelerate();
  c1.Accelerate();
  c1.Accelerate();
  c1.Brake();
  c1.Accelerate();
  c1.AddPassenger(4);
  c1.Dashboard();
}


