#include "header.h"

void doctorType::assignDoctor(string first, string last, string special)
{
    personType::setName(first,last);

    p_specialty = special;
}

void doctorType::print()
{
    personType::print();
    cout << p_specialty;
}

doctorType::doctorType(string first, string last, string special):personType(first, last)
{
    p_specialty = special;
}