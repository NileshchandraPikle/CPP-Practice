#include <iostream>

using namespace std;

struct Point{
  int x = 0;
  int y = 8;
};
int main()
{
     struct Point p1; 
     
     /*
       C structures  vs C++ structures
       1. Member functions inside structure: Structures in C cannot have member functions inside 
          structure but Structures in C++ can have member functions along with data members.
       2. Direct Initialization: We cannot directly initialize structure data members in C but 
          we can do it in C++.
         
          struct Record { 
                int x = 7; 
           }; 
           This is allowed in C++ but not in C 
  
       3. Static Members: C structures cannot have static members but is allowed in C++
       
         struct Record { 
              static int x; 
           }; 
           This is valid in C++ but not in C
         
        4. Constructor creation in structure: Structures in C cannot have constructor inside structure but 
           Structures in C++ can have Constructor creation.
           
           struct Student { 
                int roll; 
                Student(int x) 
                 { 
                      roll = x; 
                 } 
            }; 
            This is valid in C++ but not in C
            
            
        5. Data Hiding: C structures do not allow concept of Data hiding but is permitted 
           in C++ as C++ is an object oriented language whereas C is not.
      
        6. Access Modifiers: C structures do not have access modifiers as these modifiers are 
           not supported by the language. C++ structures can have this concept as it is inbuilt in the language.
  
     */
     
    /*
      Structure vs class
      
      1) Structure :- In structure have a by default public.
                      In class have a by default private.
      2) Structure cannot be inherited. 
         But class can be inherited.
      3) There is no data hiding features comes with structures. 
         Classes do, private, protected and public.
      4) A structure can't be abstract, a class can.
      5) A structure is a value type, 
         while a class is a reference type.
      6) In a Structure we can't initilse the value to the variable but 
         in class variable we assign the values.
      7) Structure are value type, They are stored as a stack on memory. 
         where as class are reference type. They are stored as heap on memory.
    */
    cout<<"Point.x "<< p1.y;

    return 0;
}
