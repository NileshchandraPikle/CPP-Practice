#pragma once

class Car{
  private:
        float fuel;
        int passengers;
        int speed;
       
  public:
        // here we create three constructors default and two parameterized
        Car(); 
        Car(float amount);
        Car(float amount, int pass);
        
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassenger(int count);
        void Dashboard();
        ~Car();
};