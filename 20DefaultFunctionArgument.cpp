
#include <iostream>

using namespace std;
/*
  Default function arguments:
  
  1. It allows some or all function arguments to have default value
  2. It becomes optional to pass argumenst to function 
     Compiler assigns automatically default value if no explicit value passed
     Explicit value is provided over default value 
  3. Default argumenst should begine from right hand side of argument list 
  
*/

void createWindow(const char* title, int x = 10, int y = 10, int width = 20, int height = 15 )
{
    cout <<"Title: "<<title<<"\n";
    cout <<"x: "<<x<<"\n";
    cout <<"y: "<<y<<"\n";
    cout <<"width: "<<width<<"\n";
    cout <<"height: "<<height<<"\n";
}
int main()
{
    createWindow("Notepad"); // Here no need to pas remaining arguments as default value considered from funct body
    
}
