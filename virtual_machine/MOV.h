#include "Instruction.h"

#ifndef MOV_H
#define MOV_H
#include <string>

using namespace std;

class MOV: public Instruction
{
private:
    string regist;
    string address;
    int value;
public:
    MOV();
    MOV(string name, short int code, short int length, string theRegister, int theAddress);
    MOV(string name, int theValue, string theRegister);
    int getValue();
    void display();
};

#endif

