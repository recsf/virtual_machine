#ifndef CU_H
#define CU_H
#include <string>
#include <iostream>
#include "Instruction.h"
#include "ALU.h"
#include "ADD.h"
#include "Program.h"
#include "Register.h"

using namespace std;
class CU
{
private:
    string status;

public:
    CU();
    CU(string theStatus);
    Instruction fetch(Program theProgram, int thePosition);
    int decode(Instruction* theInstruction);
    void execute(int theCode, Instruction *in);
    void machinecycle(Register *re, Program *pr);
};
#endif