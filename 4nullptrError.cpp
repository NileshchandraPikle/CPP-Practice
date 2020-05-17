#include<iostream>

using namespace std;

int main()
{
    int *p = nullptr;
    
    // if we try to print value at poiner p then program will terminate at runtime
    //cout <<*p<<"\n";
    //Segmentation fault (core dumped)     
    *p = 5;// This will produce the same error
    return 0;
}