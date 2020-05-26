#include "car.h"
#include <iostream>

int Car:: numCars = 0; // static variables to be defined and initialized outside class
Car::Car()
{   
    fuel = 0;
    passengers = 0;
    speed = 0;
    numCars++;
}

Car::~Car()
{
 numCars--; // count is decreamented when object is deleted
}

Car::Car(float amount)
{   
    // This is a parametersized constructor
    // Compiler will not invoke default constructor
    std::cout<<"\n Constructor with parameter ~Car() Called! \n";
    fuel = amount;
    passengers = 0;
    speed = 0;
    numCars++;
    
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

void Car:: showCount(){
    std::cout<<"numCars: "<<numCars<<std::endl;
}
void Car:: Dashboard()
{
    std::cout<<"Fuel: "<<fuel<<std::endl;
    std::cout<<"Speed: "<<speed<<std::endl;
    std::cout<<"Passengers: "<<passengers<<std::endl;
    
}