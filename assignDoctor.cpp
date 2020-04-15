#include "header.h"

void doctorType::assignDoctor(string first, string last, string special)
{
    personType::setName(first,last);

    p_specialty = special;
}
