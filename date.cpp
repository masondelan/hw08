#include "header.h"

void dateType::assignDate(string birthDate, string inDate, string outDate)
{
    p_birthDate = birthDate;
    p_inDate = inDate;
    p_outDate = outDate;
}

void dateType::print()
{
    cout << p_birthDate << endl;
    cout << p_inDate << endl;
    cout << p_outDate << endl;

}

dateType::dateType(string birthDate, string inDate, string outDate)
{
    p_birthDate = birthDate;
    p_inDate = inDate;
    p_outDate = outDate;
}