
#include <iostream>

using namespace std;
/*
  Expansion of range based for loop

*/
int main()
{
  int arr[]{1,2,3,4,5,6,7,78,8};
  for(auto x: arr)
  {
      cout<<x<<" ";
  }
  cout<<"\n ";
  
  /*
    Internally range based for lop works as follows
  */
  auto begin = &arr[0]; // auto begin = std::begin(arr); in C++ 11
  auto end   = &arr[9]; // auto end   = std::end(arr); in C++ 11
  auto &&range = arr;   // To ensure arr can be lvalue or rvalue e.g. for(auto x: {1,2,3,4,5}) here range is rvalue
  
  for(;begin!=end;++begin)
  {
      auto v = begin;
      cout<<*v <<" ";
  }
}
