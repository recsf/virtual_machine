
#include "MOV.h"
#include <iostream>


MOV::MOV(){}

MOV::MOV(string theName, int theValue, string theRegister)
{
    value = theValue;
}


MOV::MOV(string name, short int code, short int length, string theRegist, int theAddress): Instruction(name, code, length)
{
    regist = theRegist;
    address = theAddress;
}

int MOV::getValue()
{
    return value;
}

void MOV::display()
{
    cout << regist << ", " << address << endl;
}
