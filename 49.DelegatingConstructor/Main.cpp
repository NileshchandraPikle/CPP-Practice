#include <iostream>
#include "car.h"
int main () {
  /* 
    Delegating Constructor:
    1. Allows constructor to invoke another constructor
    2. Replacement for common initialization
    3. Reduces duplicate initialization of the code in multiple constructors
    4.
  */
  Car C1();// On eecution of this code Observe following order of execution
  
  /*
  Car(float,int)
  Car(float)
  Car()

 Destructor ~Car() Called! 
 
1.  We created object without any parameter, hence default constructor is called
 Car::Car():Car(0){
     std::cout<<"Car()"<<std::endl;
 }
  but before printing statement it calls Car(0) i.e. parameterized constructor with one value

2. parameterized constructor with one argument is called 
Car::Car(float amount):Car(amount,0){
     std::cout<<"Car(float)"<<std::endl;
}
but before print statement is executed parameterized constructor with two arguments is called
3. Parameterized constructor with  two arguments is called

Car::Car(int float, int pass){
    std::cout<<"Car(float,int)"<<std::endl;
    fuel = amount;
    speed = 0;
    passengers = pass;
}
Now this constructor initializes the member variables
  */
}
