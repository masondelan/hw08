#include "header.h"

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