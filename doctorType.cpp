#include "header.h"

doctorType::doctorType(string first, string last, string special):personType(first, last)
{
    p_specialty = special;
}