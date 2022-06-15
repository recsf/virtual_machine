#ifndef INSTRUCTIONSET_H
#define INSTRUCTIONSET_H

#include "Instruction.h"

using namespace std;

class InstructionSet
{
private:
    Instruction set[10];
    short int index;

public:
    InstructionSet();
    void addInstruction(Instruction theInstruction);
    Instruction getInstruction(short int pos);
};

#endif