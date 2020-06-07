
#include <iostream>

using namespace std;
int Add(int a, int b)
{
    return (a+b);
}

int & Transform(int x)
{
    x = x * x;
    return x;
}

void Print(int &x) // Function takes argumenr as L-value reference
{
    std::cout << "Print(int &)" << std::endl;
}

void Print(const int &x) // Function takes argument as const L-value reference
{
    std::cout << "Print(const int &x)" << std::endl;
}

void Print(const int &&x) // Function takes argument as const L-value reference
{
    std::cout << "Print(int &&x)" << std::endl;
}
int main()
{   /*
       L-value                                  vs                                    R-value 
       1. has name                                              1. does not have name 
       2. All variables are l-value                             2. R-value is a temporary value 
       3. Can be assigned values                                3. Cannot be assigned values 
       4. Some expressions return l-value                       4. Some expressions return  R-value
       5. L-value persists beyond the expression                5. R-value doesnot persists beyond expression
       6. Functions that returns reference returns l-value      6. Functions that return by value returns R-value
       7. Reference to l-value called l-value Reference         7. Reference to R-value called R-value Reference
       
       R-value Reference introduced in c++ 11 to implement move semantic
       1. R-value Reference always created to temporary
       2. always represents temporary
       3. Created with R-value Reference operator &&
       4. cannot bind to l-values
       5. R-value Reference always bind to temporary and l-value Reference always bind to l-value
       
   */
    
    int &&r1 = 10; // 10 is temporary and r1 is R-value reference to temporary 10
    int &&result = Add(1,2);
    std::cout << result << std::endl;
    int x{12};
    //int &&r2 = x; // Error R-value reference cannot bind to l-value
    
    int &ref1 = Transform(x);
    //std::cout << ref1 << std::endl; // segmentation fault
    
    const int &r2 = 12; // l-value reference may bind to temporory if reference is of const type
    
    // R-value reference allows us to detect temporories in expression 
    
    Print(x);// calls function Print(int &x) that takes l-value reference as imput
    Print(3);// calls function Print(int &x) that takes constant l-value reference as imput
    // If we define a function Print(int &&x) that takes r-value reference then Print(3) calls that function  
    // temporories always bind to R-value reference but in exception temporaries can bind to constant l-value reference
    
    return 0;
}
