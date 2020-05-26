#include <iostream>
#include "car.h"
int main () {
    /*
    Static member variables
    1. member variables qualified with Static keyword
    2. Static variables are not part of the object
    3. They are part of the class
    4. Only one copy exists and shared between objects of that class
    5. Static variables cannot be initialzed in a class
    6. have to be defined ouside of the class for initialzation
    
    car.h 
    class Car{
        Static int numCars; 
    }
    
    In above case declared inside the class in header file
    
    car.cpp 
    
    int Car:: numCars; // initialzed with default value 0
    */
    
    Car c1;
    Car c2(4.5);
    Car c3;
    //c3.Dashboard();
    
    // Here we have to create a object of Car every time to check number of cars
    // To find number of cars we can declare a static function
    
    /*
      1. static functions ualified with static keywords
      2. required only in declaration
      3. They do not belong to object but class
      4. Do not receive this pointer
      5. Hence one cannot access non static members from static function
      6. Can invoked directly through class name or object of the class however it
         is preferred to call static function using class name
    */
    
    Car::showCount(); // Called using class name
    c3.showCount(); // Called using object
}


