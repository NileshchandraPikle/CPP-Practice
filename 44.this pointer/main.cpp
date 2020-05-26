
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
    this->speed += 50; // By default this is associated with member variables 
}

void Car:: Brake(){
    this->speed = 0;
}

void Car:: AddPassenger(int passengers){
    this->passengers += passengers;// Here this keyword avoid ambiguity between member variable 'passengers'
                                   // and argument 'passengers'. this-> tells the compiler to consider variable
                                   // is from object from which member function is called
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
      this pointer:
      1. A hidden pointer passed to a member function
      2. Points to the object that invoked the member function
      3. Provided as keyword and has meaning only in member functions
      4. Can be used to access members inside member function 
      5. Cannot assign another address to this pointer as it is constant 
    */
    
    Car c1;
    c1.Dashboard();

    return 0;
}
