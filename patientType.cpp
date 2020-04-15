#include "header.h"

patientType::patientType(string first, string last, int id, int age, string birthDate,
                         string doctorFirst, string doctorLast, string inDate,
                         string outDate) : personType(first,last), p_doctorData(doctorFirst, doctorLast),
                         p_dateData(birthDate, inDate, outDate)
{
    p_id = id;
    p_age = age;
}