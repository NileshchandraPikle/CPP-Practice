#include "car.h"
#include <iostream>

Car::Car()
{   // Values of the private class members are initialized to default values
    // memntioned in constructor here
    std::cout<<"\n Constructor Car() Called! \n";
    fuel = 10.0f;
    passengers = 0;
    speed = 0;
}

Car::~Car()
{
    std::cout<<"\n Destructor ~Car() Called! \n";
    // Destructor is called when object is destroyed
}

Car::Car(float amount)
{   
    // This is a parametersized constructor
    // Compiler will not invoke default constructor
    std::cout<<"\n Constructor with parameter ~Car() Called! \n";
    fuel = amount;
    speed = 0;
    passengers = 0;
    
    // You must initialize all varaible members in parameterized constructor also
    
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