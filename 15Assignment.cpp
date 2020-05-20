#include <iostream>

using namespace std;

int main()
{
    /****************** FOR REFERENCE ********************************************************
        Given 
        int &ref_x1 = x; 
        x = 90;      // valid and updates x value
        ref_x1 = 90; // valid and updates x value
    
     1. int &ref_x1 = x; correct, ref_x1 as reference to integer value x
        we can modify x = 90 as well as ref_x1 = 90
    
        
     2. const int &ref_x2 = x; 
        If you read it : ref_x2 is a reference to const integer value x 
        However referent could be anything constant l-value/non-const l-value /literal (r-value)
        
        const int &ref_x2 = x; valid
        const int &ref_x2 = MAX; valid
        const int &ref_x2 = 44; valid
        
        Think of it this way: a References to constant variable treats the variable as constant 
        when it is accessed through the Reference, regardless of whether the variable was
        initially defined as const or non const or literal
        
        Therefore we cannot update referent value using ref_x2 = 99;
        
        Example 1:
        given const int &ref_x2 = x; valid
        
        we can update x value by writing x = 99
        but it is invalid to write ref_x2 = 99 as we are accessing through reference
        
        Example 2:
        given const int &ref_x2 = 33; valid
        
        it is invalid to write ref_x2 = 99 as we are accessing through reference
        
        Example 3:
        given 
        const int MAX = 12;
        const int &ref_x2 = MAX; valid
        
        we cannot update MAX value by writing MAX = 99 as MAX is declared as const int MAX = 12;
        it is also invalid to write ref_x2 = 99 as we are accessing through reference
        
        Example 4:
        given 
        const int MAX = 12;
        int &ref_x2 = MAX; invalid 
        
        references to non-const values (int &ref_x1 = x; where x is non-constant value), 
        which can only be initialized with non-const l-values, it cannot be assigned to cosnt value like MAX;
    */
    
    
    /****************** FOR POINTER *******************************************************
    Given: 
    int x = 5;
    int MAX = 12;
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;
    
    1. cosnt int *ptr1 = &x;
       
       Here if we read the statement: ptr1 is pointer to constant integer points to x
       
       However ptr1 can point to constant l-value, non-const l-value but NOT literal/number 
       (This is possible with reference like const int &ref_x2 = 88 is valid)
       
       we can change value of x by x = 100;
       But it is invalid to update through pointer like *ptr1 = 100;
       ptr1 can point to other variable also like ptr1 = &y is valid
       
    2. int *const ptr2 = &x ;
       statement: ptr2 is a constant pointer to a non-constant integer value and pointing to x
       
       x can be updated normally by x = 99;
       ptr2 is bound to x ONLY
       ptr2 = &y; is invalid as ptr2 is constant pointer
       
       const int MAX = 12;
       int *const ptr2 = &MAX; // invalid as ptr2 should points to non-constant value but pointign to constant value 
    */
 /*   
//Try to modify x1 & x2 and see the compilation output
int x = 5 ;
const int MAX = 12 ;
int &ref_x1 = x; // Valid
const int &ref_x2 = x; // valid 
 
//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
const int *ptr1 = &x; // x = 90; is valid,  ptr1 = &y; is valid *ptr1 = 7; is invalid
int *const ptr2 = &x ; // ptr2 = &y; is invalid    x = 90 is valid *ptr2 = 99; is valid 
const int * const ptr3 = &x;// x = 99; is valid  ptr3 = &MAX is invalid, 
 //const int * const ptr3 = &MAX; is valid 

 
 
 
//Find which declarations are valid. If invalid, correct the declaration
const int *ptr3 = &MAX ;// valid 
int *ptr4 = &MAX ; // invalid const int *ptr4 = &MAX ;  or  int const *ptr4 = &MAX ;
 
const int &r1 = ref_x1; // x = 9; is valid   ref_x1 = 99; is valid  r1 = 9; is invalid because access through reference
int &r2 = ref_x2 ; const int &r2 = ref_x2; is valid
 
int *&p_ref1 = ptr1; // int const *&p_ref1 = ptr1; is correct


const int*&p_ref2 = ptr2 ; // Following is the correct way

 int x;
 int const * ptr2 = &x ;
const int* &p_ref2 = ptr2 ;
 */ 
}
