#include <cstdlib>
#include <iostream>
#include "Instruction.h"
#include "InstructionSet.h"
#include "Program.h"
#include "MOV.h"
#include "CU.h"
#include "ADD.h"
#include "MULT.h"
#include "SUB.h"
#include "DIV.h"


#include "Register.h"
#include "PC.h"
#include "IR.h"
#include "MAR.h"
#include "MBR.h"
#include "ACC.h"
#include "AL.h"
#include "AH.h"
#include "BL.h"
#include "BH.h"

using namespace std;
int main(void) {


    PC programCounter("PC");
    IR instructionRegister("IR");
    MAR memoryAddressRegister("MAR");
    MBR memoryBufferRegister("MBR");
    ACC accumulator("ACC");
    AL aLow("AL");
    AH aHigh("AH");
    BL bLow("BL");
    BH bHigh("BH");

    Register registers[] = {
            programCounter,
            instructionRegister,
            memoryAddressRegister,
            memoryBufferRegister,
            accumulator,
            aLow,
            aHigh,
            bLow,
            bHigh};


    Instruction *start= new Instruction("START", 50, 1);
    Instruction *stop = new Instruction("STOP", 51, 1);
    ADD *add= new ADD("ADD", 80, 3, 60, 12);
    MULT *mult= new MULT("MULT", 81, 3, 13, 3);
    SUB *sub= new SUB("SUB", 82, 3, 33, 10);
    DIV *div= new DIV("DIV", 83, 3, 44, 4);

    Program program(10);

    program.addInstruction(start);
    program.addInstruction(add);
    program.addInstruction(mult);
    program.addInstruction(sub);
    program.addInstruction(div);
    program.addInstruction(stop);
    /*cout << program.getInstruction(0)->getName() << endl;

    cout << program.getInstruction(1)->getName() << endl;
    cout << program.getInstruction(2)->getName() << endl;
    cout << program.getInstruction(3).getName() << endl;
    cout << program.getInstruction(4).getName() << endl;
    cout << program.getInstruction(5).getName() << endl;*/


    /*Instruction theInstruction;
    for (int pos = 0; pos < 6; pos++) {
        theInstruction = cu.fetch(program, pos);
        int theCode = cu.decode(&theInstruction);
        cu.execute(theCode);
    }*/




    /*ADD* ptr_add = static_cast<ADD*>(instructions[1]);
    cout << ptr_add->getOperand1() << endl;
    cout << ptr_add->getOperand2() << endl;
    __asm__( "addl %%ebx, %%eax;"
            : "=a" (total)
            : "a" (ptr_add->getOperand1()), "b" (ptr_add->getOperand2())
            );

    printf("sum = %i\n", total);


    MULT* ptr_mult = static_cast<MULT*>(instructions[2]);
    cout << ptr_mult->getOperand1() << endl;
    cout << ptr_mult->getOperand2() << endl;

    __asm("imull %%ebx, %%eax;"
            : "=a"(total)
            : "a"(ptr_mult->getOperand1()), "b"(ptr_mult->getOperand2()));
    printf("mult = %i\n", total);

    SUB* ptr_sub = static_cast<SUB*>(instructions[3]);
    cout << ptr_sub->getOperand1() << endl;
    cout << ptr_sub->getOperand2() << endl;
    __asm("subl %%ebx, %%eax;"
            : "=a"(total)
            : "a"(ptr_sub->getOperand1()), "b"(ptr_sub->getOperand2()));
    printf("sub = %i\n", total);

    DIV* ptr_div = static_cast<DIV*>(instructions[4]);
    cout << ptr_div->getOperand1() << endl;
    cout << ptr_div->getOperand2() << endl;
    __asm("subl %%ebx, %%eax;"
            : "=a"(total)
            : "a"(ptr_div->getOperand1()), "b"(ptr_div->getOperand2()));
    printf("sub = %i\n", total);*/


    CU cu;
    cu.machinecycle(registers, &program);
    return 0;
}
