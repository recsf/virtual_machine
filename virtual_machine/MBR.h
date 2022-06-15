
#ifndef VIRTUAL_MACHINE_MBR_H
#define VIRTUAL_MACHINE_MBR_H

#include "Register.h"
#include <string>

using namespace std;

class MBR : public Register
{

public:
    MBR();
    MBR(string);
};


#endif //VIRTUAL_MACHINE_MBR_H
