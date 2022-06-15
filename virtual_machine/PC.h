
#ifndef VIRTUAL_MACHINE_PC_H
#define VIRTUAL_MACHINE_PC_H


#include "Register.h"
#include <string>
#include "Instruction.h"

using namespace std;

class PC : public Register
{

    Instruction* address;

public:
    PC();
    PC(string);

    void setAddress(Instruction*);
    Instruction* getAddress();
};

#endif //VIRTUAL_MACHINE_PC_H
