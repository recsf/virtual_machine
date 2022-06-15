

#ifndef VIRTUAL_MACHINE_BL_H
#define VIRTUAL_MACHINE_BL_H


#include "Register.h"
#include <string>

using namespace std;

class BL : public Register
{

public:
    BL();
    BL(string);
};


#endif //VIRTUAL_MACHINE_BL_H
