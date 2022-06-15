
#include "SUB.h"


SUB::SUB(){}

SUB::SUB(string theName, int theCode, int theLength, int theOperand1, int theOperand2): Instruction(theName, theCode, theLength)
{
    operand1 = theOperand1;
    operand2 = theOperand2;
}

int SUB::getOperand1()
{
    return operand1;
}

int SUB::getOperand2()
{
    return operand2;
}
