#include "header.h"

void personType::print() const
{

    cout << p_firstName << " " << p_lastName;

}

void personType::setName(string first, string last)
{
    p_firstName = first;
    p_lastName  = last;
}

personType::personType(string first, string last)
{
    p_firstName = first;
    p_lastName = last;
}