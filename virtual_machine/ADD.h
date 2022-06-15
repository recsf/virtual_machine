#ifndef ADD_H
#define ADD_H
#include "Instruction.h"
#include <string>

using namespace std;
class ADD: public Instruction
{
private:
    int operand1;
    int operand2;
public:
    ADD();
    ADD(string theName, int theCode, int theLength, int theOperand1, int theOperand2);
    int getOperand1();
    int getOperand2();


};
#endif

