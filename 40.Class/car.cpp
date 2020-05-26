#include "car.h"
#include <iostream>
void Car:: FillFuel(float amount)
{
    fuel += amount;
}

void Car:: Accelerate()
{
    speed += 5;
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