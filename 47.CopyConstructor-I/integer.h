#pragma once

class Integer {
    private:
         int *mPtr;
    public:
         Integer();
         Integer(int val);
         /*
           here constructors are allocatin resources but not released anywhere hence
           we will define user defined destructor
         */
         int getValue()const;
         void setvalue(int val);
         ~Integer();
};
