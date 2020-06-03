#pragma once

class Integer {
    private:
         int *mPtr;
    public:
         Integer(); // Default constructor
         Integer(int val);// Parameterized constructor
         int getValue()const; // constant member function
         void setvalue(int val); // Member function
         ~Integer(); // Destructor
         
         // Copy constructor
         Integer(const Integer &obj);// Here Integer object is pass by reference
         /*If we dont use reference then again object copy is created as 
           object is pass by value to the constructor and hence it will go
           in infinite loop
           
           To avoid modification of obj always qualify witn const qualifier
         */
         
         
};