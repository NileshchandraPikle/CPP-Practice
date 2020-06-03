#include "car.h"
#include <iostream>

/*
Focus here on three constructors, all do some common initizlizations

Car::Car()
{ 
    fuel = 0.0f;
    passengers = 0;
    speed = 0;
}
Car::Car(float amount)
{   
    fuel = amount;
    speed = 0;
    passengers = 0;
}
Car::Car(float amount, int pass)
{   
    fuel = amount;
    speed = 0;
    passengers = pass;
}

we can delegate the constructors in following ways
*/

Car::Car():Car(0)
{ 
    std::cout<<"Car()"<<std::endl;
}
Car::Car(float amount):Car(amount,0)
{   
   std::cout<<"Car(float)"<<std::endl;
}
Car::Car(float amount, int pass)
{   std::cout<<"Car(float,int)"<<std::endl;
    fuel = amount;
    speed = 0;
    passengers = pass;
}
/*
  Now call to any constructor goes to third constructor and initization is performed.
  This reduces the code duplication and chance of bugs in constructor
  
*/

Car::~Car()
{
    std::cout<<"\n Destructor ~Car() Called! \n";
    // Destructor is called when object is destroyed
}


void Car:: FillFuel(float amount)
{
    fuel += amount;
}

void Car:: Accelerate()
{
    speed += 50;
}

void Car:: Brake(){
    speed = 0;
}

void Car:: AddPassenger(int count){
    passengers += count;
}

void Car:: Dashboard()
{
    std::cout<<"Fuel: "<<fuel<<std::endl;
    std::cout<<"Speed: "<<speed<<std::endl;
    std::cout<<"Passengers: "<<passengers<<std::endl;
}
