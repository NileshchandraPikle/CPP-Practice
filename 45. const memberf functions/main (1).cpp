#include<iostream>

using namespace std;
class Car{
    private:
        int passengers;
        int speed;
        float fuel;
    public:
    Car();
    Car(float amount);  // Parameterized constructor
    void Accelerate(); //updates the speed variable
    void Brake();      //updates the speed variable
    void AddPassengers(int count);//updates the passengers variable
    void Dashboard()const;    // Do not modify any member variable
};

Car::Car(){ // default constructor
      passengers = 0;
      speed = 0;
      fuel = 0;
}

Car::Car(float amount)
{
    // Parameterized constructor
    std::cout<<"Parameterized constructor called! "<<std::endl;
    fuel = amount;
    speed = 0;
    passengers = 0;
}

void Car :: AddPassengers(int count){
    passengers += count;
}

void Car:: Accelerate(){
    speed += 5;
}

void Car::Brake()
{
    speed = 0;
}

 void Car:: Dashboard()const{
     std::cout<<"Fuel: "<<fuel<<std::endl;
     std::cout<<"passengers: "<<passengers<<std::endl;
     std::cout<<"speed: "<<speed<<std::endl;
 }
int main()
{
    /*
       Constant member functions:
       1. member functions qualified with const keyword
       2. Both decleration and defination is qualified
       3. Such functions cannot modify any member variables
       4. useful to create read only functions
       5. If you create Constant object then it can read only Constant member function
    */
    
    const Car c1(4.5);
    
    c1.AddPassengers(2); // This will result in error as c1 is  object of Constant type 
                         // hence it can access only Constant member functions
    c1.Dashboard(); // this is constant member function (Both decleration and defination are qualified with const keyword)
                    // as this function is not updating any member variable hence this is read only function
    
    // ALL member functions which do not modify state of the object can be qualified with constant
    
    return 0;
}