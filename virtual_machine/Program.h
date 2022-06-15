
#ifndef PROGRAM_H
#define PROGRAM_H

#include "Instruction.h"
#include <string>

class Program
{
    Instruction **instructions;
    int size=0;
    int length;
public:
    Program(){}
    Program(int);
    ~Program();

    void addInstruction(Instruction *newInstruction);
    Instruction * getInstruction(int);

    int getSize();
};

#endif
