#pragma once

class Car{
  private:
        float fuel;
        int passengers;
        int speed;
        /*
        Q. Whether to initialize variables inside class or not?
        float fuel = 90;
        int passengers = 8;
        int speed = 100;
        Traditionally, you couldn’t do it and had to use a constructor. 
        But the latest spec, C++14, specifies that you can do in-class 
        initialization, and your compiler will support that feature if 
        it is fully C++14 complete.
        If you use BOTH in-class initialization and constructors, 
        the action of the constructor will override the intialization.
        
        
        You could think of a class as just a template for your objects. 
        In a class you define how your object of the respective class 
        should actually look like.

        Hence, when you define a class you don’t actually allocate 
        memory so there is no scope of initializing a variable instead 
        memory is allocated when you declare an object of that class and 
        that is when you should initialize your variable of the class. 
        Each object could have either same or different values of the variables.
        */
  public:
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassenger(int count);
        void Dashboard();
};