

#ifndef VIRTUAL_MACHINE_AH_H
#define VIRTUAL_MACHINE_AH_H


#include "Register.h"
#include <string>

using namespace std;

class AH : public Register
{

public:
    AH();
    AH(string);
};


#endif //VIRTUAL_MACHINE_AH_H
