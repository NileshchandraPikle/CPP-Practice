#include"integer.h"

Integer::Integer(){
    mPtr = new int(0);
}


Integer::Integer(int val){
    mPtr = new int(val);
}

int Integer::getValue()const{
    return *mPtr;
}

void Integer::setvalue(int val){
    *mPtr = val;
}

Integer::~Integer(){
    delete mPtr; 
}
