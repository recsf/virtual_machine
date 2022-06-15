//
// Created by developer on 13/06/22.
//

#ifndef VIRTUAL_MACHINE_IR_H
#define VIRTUAL_MACHINE_IR_H

#include "Register.h"
#include <string>
#include "Instruction.h"

using namespace std;

class IR : public Register
{

    Instruction* instruction;

public:
    IR();
    IR(string);

    Instruction* getInstruction();
    void setInstruction(Instruction*);
};


#endif //VIRTUAL_MACHINE_IR_H
