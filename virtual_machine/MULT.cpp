#include "MULT.h"

MULT::MULT(){}

MULT::MULT(string theName, int theCode, int theLength, int theOperand1, int theOperand2): Instruction(theName, theCode, theLength)
{
    operand1 = theOperand1;
    operand2 = theOperand2;
}

int MULT::getOperand1()
{
    return operand1;
}

int MULT::getOperand2()
{
    return operand2;
}
