
#ifndef VIRTUAL_MACHINE_AL_H
#define VIRTUAL_MACHINE_AL_H


#include "Register.h"
#include <string>

using namespace std;

class AL : public Register
{

public:
    AL();
    AL(string);
};


#endif //VIRTUAL_MACHINE_AL_H
