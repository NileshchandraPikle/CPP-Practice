
#include <iostream>
using namespace std;


class Car{
  private:
        float fuel = 10.0f;
        int passengers = 0;
        int speed = 0;
        /*
          From c++ 11 onwards declaration and initialization of data member is allowed 
        */
       
  public:
        Car(); 
        Car(float amount);
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassenger(int count);
        void Dashboard();
        ~Car();
};


Car::Car()
{ 
    // No data member is initialized
}

Car::~Car()
{

}

Car::Car(float amount)
{   
    // This is a parametersized constructor only fuel value is initialized 
    // Compiler will not invoke default constructor
    std::cout<<"\n Constructor with parameter ~Car() Called! \n";
    fuel = amount;
    
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

int main()
{
    /*
      Non static data member initialization
      1. Convinient way of initializing class members with values during declaration
      2. Ensures members are initialized with valid values
      3. Can be used for initialization of any type list/variable/poiner/object
      4. Compiler automatically generates initialization code: if there is no constructor then complier
         creates one and adds the initialization values in the constructor
      5. initialization in user defined constructor takes precedence: if constructor also initializes
         then declaration values are replaced with values in constructor
    */
    
    Car c1;
    c1.Dashboard(); // here though constructor do not initializes any variable
                    // values are taken from class declaration
    Car c2(4.5);    // Here parametersized constructor is called and fuel value is initialized with 4.5 
                    // other values speed and passengers are initialized with 0 from class declaration

    return 0;
}
