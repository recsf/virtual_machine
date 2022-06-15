//
// Created by developer on 13/06/22.
//

#include "IR.h"

IR::IR() {}

IR::IR(string _name) : Register(_name) {}

Instruction *IR::getInstruction() { return instruction; }

void IR::setInstruction(Instruction *in) { instruction = in; }
