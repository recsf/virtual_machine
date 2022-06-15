#include "CU.h"
#include "ADD.h"
#include "SUB.h"
#include "Instruction.h"
#include "MULT.h"
#include "DIV.h"
#include "Program.h"


CU::CU()
{
    status = "idle";
}

CU::CU(string theStatus)
{
    status = theStatus;
}

Instruction CU::fetch(Program theProgram, int thePosition)
{

}

int CU::decode(Instruction* theInstruction)
{

    return theInstruction->getCode();
}

void CU::execute(int theCode, Instruction *in)
{
    register int total;

    switch (theCode) {

        case 50:
            cout << "Inicio del programa" << endl;
            break;

        case 51:
            cout << "Fin de ejecucion del programa" << endl;
            break;

        case 80:
            cout << "Sumar" << endl;
            ADD *ptr_add;
            ptr_add = static_cast<ADD *>(in);
            cout << ptr_add->getOperand1() << endl;
            cout << ptr_add->getOperand2() << endl;
            __asm__( "addl %%ebx, %%eax;"
                    : "=a" (total)
                    : "a" (ptr_add->getOperand1()), "b" (ptr_add->getOperand2())
                    );

            printf("sum = %i\n", total);
            break;

        case 81:
            cout << "Multiplicar" << endl;
            MULT *ptr_mult;
            ptr_mult = static_cast<MULT *>(in);
            cout << ptr_mult->getOperand1() << endl;
            cout << ptr_mult->getOperand2() << endl;

            __asm("imull %%ebx, %%eax;"
                    : "=a"(total)
                    : "a"(ptr_mult->getOperand1()), "b"(ptr_mult->getOperand2()));
            printf("mult = %i\n", total);
            break;

        case 82:
            cout << "Restar" << endl;
            SUB *ptr_sub;
            ptr_sub = static_cast<SUB *>(in);
            cout << ptr_sub->getOperand1() << endl;
            cout << ptr_sub->getOperand2() << endl;
            __asm("subl %%ebx, %%eax;"
                    : "=a"(total)
                    : "a"(ptr_sub->getOperand1()), "b"(ptr_sub->getOperand2()));
            printf("sub = %i\n", total);
            break;

        case 83:
            cout << "Dividir" << endl;
            DIV *ptr_div;
            ptr_div = static_cast<DIV *>(in);
            cout << ptr_div->getOperand1() << endl;
            cout << ptr_div->getOperand2() << endl;
            __asm("subl %%ebx, %%eax;"
                    : "=a"(total)
                    : "a"(ptr_div->getOperand1()), "b"(ptr_div->getOperand2()));
            printf("sub = %i\n", total);
            break;

        default:
            break;
    }

}

void CU::machinecycle(Register *re, Program *pr) {

    /*
     * Recorrer instrucciones -> for
     * Cada instruccion, fetch, decode, execute
     * Cada fetch, decode, execute, imprimir registros
     * */
    Instruction theInstruction;
    for (int pos = 0; pos < pr->getSize(); pos++) {
        theInstruction = fetch(*pr, pos);
        int theCode = decode(&theInstruction);
        execute(theCode, &theInstruction);
    }
}
