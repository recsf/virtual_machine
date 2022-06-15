
#ifndef VIRTUAL_MACHINE_MAR_H
#define VIRTUAL_MACHINE_MAR_H

#include "Register.h"
#include <string>
#include "Instruction.h"

using namespace std;

class MAR : public Register
{
    Instruction *address;
public:
    MAR();
    MAR(string);

    void setAddress(Instruction*);
    Instruction* getAddress();
};


#endif //VIRTUAL_MACHINE_MAR_H
