
#ifndef VIRTUAL_MACHINE_DIV_H
#define VIRTUAL_MACHINE_DIV_H
#include "Instruction.h"
#include <string>

using namespace std;

class DIV: public Instruction
{
private:
    int operand1;
    int operand2;
public:
    DIV();
    DIV(string theName, int theCode, int theLength, int theOperand1, int theOperand2);
    int getOperand1();
    int getOperand2();


};


#endif //VIRTUAL_MACHINE_DIV_H
