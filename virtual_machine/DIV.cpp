
#include "DIV.h"


DIV::DIV(){}

DIV::DIV(string theName, int theCode, int theLength, int theOperand1, int theOperand2): Instruction(theName, theCode, theLength)
{
    operand1 = theOperand1;
    operand2 = theOperand2;
}

int DIV::getOperand1()
{
    return operand1;
}

int DIV::getOperand2()
{
    return operand2;
}
