
#include <iostream>

using namespace std;
/*
  namespaces:
  1. Named declarative region used for declaring types
  2. TYpes are not visible outside namespaces
  3. standard library is in std namespaces
  4. Prevents name clashes: two programmers in a projects may use same variable/function names 
  5. Helps modularise code: classes and functions works towards the same concept can be grouped together in same namespace
    Syntax:
    namespace <name>{
        namespace, classes, structure, variable, functions etc.
    
    }
  6. types within namespace have scope
  7. They are not accessible outside the namespace
  8. Either open namespace or type 
     - use global 'using' declarative to open entire namespace
       eg. using namespace std 
           this will open namespace in current function only so scope is limited to that function 
     - use the using declarative to open the type
    eg. using std::cout 
     
     - using full qualified name 
     std::cout<<" "<<std::endl;
       
       
  */
  
namespace avg{
    float calculate(float a, float b)
    {
        return (a+b)/2;
    }
}
namespace add{
    float calculate(float a, float b)
    {
        return (a + b);
    }
}
int main()
{
  /*
    opening both namespaces globally in main() function introduces error
    as both have same function name calculate()
  */
  
  auto average = avg::calculate(3.4f, 5.5f);
  auto addition = add::calculate(2.3f,4.4f);
  
  cout<<average<<" "<<addition<<endl;
}

/*
  namespace sort{
      
      void bubbleSort(){
          
      }
      
      void quicksSort(){
          
      }
      
      void mergeSort(){
          
      }
      
      namespace compare{
          int greater(){
              
          }
          int smaller(){
              
          }
      }
      
  }
  
  here we grouped all sorting related functions in a namespace sort 
  inside sort namespace again another namespace is defined
  
  access 
  sort::compare::greater(val1, val2); 
*/
