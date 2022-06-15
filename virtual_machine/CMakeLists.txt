cmake_minimum_required(VERSION 3.22)
project(virtual_machine)

set(CMAKE_CXX_STANDARD 14)

add_executable(virtual_machine main.cpp Instruction.cpp Instruction.h InstructionSet.cpp InstructionSet.h Program.cpp Program.h MOV.cpp MOV.h CU.cpp CU.h ADD.cpp ADD.h ALU.cpp ALU.h MULT.cpp MULT.h SUB.cpp SUB.h DIV.cpp DIV.h Register.cpp Register.h PC.cpp PC.h IR.cpp IR.h MAR.cpp MAR.h MBR.cpp MBR.h ACC.cpp ACC.h AL.cpp AL.h AH.cpp AH.h BL.cpp BL.h BH.cpp BH.h)
