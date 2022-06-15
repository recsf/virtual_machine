#ifndef ALU_H
#define ALU_H

class ALU
{
private:
    short int operand1;
    short int operand2;

public:
    ALU();
    ALU(short int theOperand1, short int theOperand2);
    short int add(short int theOperand1, short int theOperand2);
};

#endif
