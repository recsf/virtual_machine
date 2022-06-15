
#ifndef VIRTUAL_MACHINE_ACC_H
#define VIRTUAL_MACHINE_ACC_H

#include "Register.h"
#include <string>

using namespace std;

class ACC : public Register
{

public:
    ACC();
    ACC(string);
};



#endif //VIRTUAL_MACHINE_ACC_H
