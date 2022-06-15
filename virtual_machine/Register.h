#ifndef VIRTUAL_MACHINE_REGISTER_H
#define VIRTUAL_MACHINE_REGISTER_H

#include <string>

using namespace std;

class Register
{
    string name;
    int value;

public:
    Register();
    Register(string);

    int getValue();
    void setValue(int);

    string getName();
    void setName(string);
};


#endif //VIRTUAL_MACHINE_REGISTER_H
