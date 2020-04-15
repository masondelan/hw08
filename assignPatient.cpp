#include "header.h"

void patientType::assignPatient(string first, string last, int id, int age, string birthDate,
                                string doctorFirst, string doctorLast, string inDate, string outDate)
{
    personType::setName(first,last);

    p_dateData.assignDate(birthDate,inDate,outDate);
    p_doctorData.assignDoctor(doctorFirst,doctorLast);

    p_id = id;
    p_age = age;
}