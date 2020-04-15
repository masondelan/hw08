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

void patientType::print()
{
    cout << "Patient Name: ";
    personType::print();
    cout << "Patient ID: " << p_id << endl;
    cout << "Patient Age: " << p_age << endl;
    p_dateData.print();
    cout << endl << "Physician Name: ";
    p_doctorData.print();

}

patientType::patientType(string first, string last, int id, int age, string birthDate,
                         string doctorFirst, string doctorLast, string inDate,
                         string outDate) : personType(first,last), p_doctorData(doctorFirst, doctorLast),
                                           p_dateData(birthDate, inDate, outDate)
{
    p_id = id;
    p_age = age;
}