#pragma once

class Car{
  private:
        float fuel;
        int passengers;
        int speed;
        static int numCars; // static variable declared
        // static int numCars = 9; // this is not allowed 
  public:
        Car(); 
        Car(float amount);
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassenger(int count);
        void Dashboard();
        static void showCount();
        ~Car();
};