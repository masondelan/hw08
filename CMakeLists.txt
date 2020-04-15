cmake_minimum_required(VERSION 3.15)
project(hw08)

set(CMAKE_CXX_STANDARD 14)

add_executable(hw08 main.cpp personType::print.cpp personType::setName.cpp personType.cpp assignDoctor.cpp doctorType.cpp assignDate.cpp doctorType::print.cpp dateType::print.cpp dateType.cpp assignPatient.cpp header.h patientType::print.cpp patientType.cpp assignExpense.cpp printExpenses.cpp billType.cpp)