#include<iostream>

using namespace std;
/*
    void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
    void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
    void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments
*/

void Add(int a,int b, int &result)// To indicate data type reference is of integer type
{
    result = a + b;
}

void Factorial(int a, int &result)
{
   int fact = 1;
    for(int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    result = fact;
}

 void Swap(int &a, int &b)
 {
     int temp;
     temp = a;
     a = b;
     b = temp;
 }
int main()
{
    int a {4}, b {2};
    cout<<a<<" "<<b<<"\n";
    int c;
    int &result = c;
    
    Add(a,b,result);// Passing reference
    cout<<" "<<c;
    
    Factorial(a,result);
    cout<<"\n Factorial of  "<<a <<" is "<<c;
    
    cout<<"\n Before swap a = "<<a<<" b = "<<b<<"\n";
    int &refA = a;
    int &refB = b;
    Swap(refA,refB);
    cout<<" After swap a = "<<a<<" b = "<<b<<"\n";
    
}