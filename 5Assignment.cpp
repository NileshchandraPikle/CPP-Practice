#include<iostream>

using namespace std;

/*
//Implement the following functions using pointer arguments only

    int Add(int *a, int *b) ;    //Add two numbers and return the sum
    void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
    void Swap(int *a, int *b) ;  //Swap the value of two integers
    void Factorial(int *a, int *result);  
*/
int Add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

void AddVal(int *a, int *b, unsigned long int *result)
{
    *result = *a + *b;
}

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void Factorial(int *a, unsigned long int *result)
{
    int fact = 1;
    for(int i = *a; i >0; i--)
    {
        fact*= i;
    }
    *result = fact;
}
int main ()
{
  int a,b;
  cout<<"Enter value of a: "<<"\n";
  cin>>a;
  cout<<"Enter value of b: "<<"\n";
  cin>>b;
  unsigned long int result;
  
  result =  Add(&a, &b);
  cout<<"result after Add() is "<<result<<"\n";
  AddVal(&a,&b, &result);
  cout<<"result after AddVal() is "<<result<<"\n";
  cout<<"before swap() a is "<<a<<" b is "<<b <<"\n";
  Swap(&a, &b);
  cout<<"After swap() a is "<<a<<" b is "<<b <<"\n";

  Factorial(&a,&result);
  cout<<"Factorial of a is "<<result<<"\n";
  return 0;
}
