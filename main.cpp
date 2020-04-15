#include "header.h"
int main()
{
    int userInput;
    int id;
    int age;
    int expense;
    string firstName;
    string lastName;
    doctorType doctor;
    patientType patient;
    billType bill;
    string birthDate;
    string inDate;
    string outDate;
    string doctorFirstName;
    string doctorLastName;
    string doctorSpecialty;

    cout << "Please select one of the following: " << endl;
    cout << "1) For Doctor Information" << endl;
    cout << "2) For Patient Information" << endl;
    cout << "3) For Billing Information" << endl;
    cout << "**** Enter 4 to Exit Program ****" << endl;

    cin >> userInput;
    cin.ignore(10000, '\n');

    while(userInput != 4 && cin)
    {
        switch(userInput)
        {
            case 1:
                cout << "Enter Physician First Name: ";
                getline(cin, doctorFirstName);
                cout << endl;

                cout << "Enter Physician Last Name: ";
                getline(cin, doctorLastName);
                cout << endl;

                cout << "What is the Physicians Specialty: ";
                cin  >> doctorSpecialty;
                cout << endl;

                doctor.assignDoctor(doctorFirstName, doctorLastName, doctorSpecialty);
                doctor.print();
                break;

            case 2:
                cout << "Enter Patient First Name: ";
                getline(cin, firstName);

                cout << "Enter Patient Last Name: ";
                getline(cin, lastName);

                cout << "Enter ID #: ";
                cin  >> id;
                cout << endl;
                cout << "Enter Patient Age: ";
                cin  >> age;
                cout << endl;
                cin.ignore(1000,'\n');
                cout << "Enter Patient Birth Date: ";
                getline(cin,birthDate);
                cout << endl;
                cout << "Enter Patient Admission Date: ";
                getline(cin,inDate);
                cout << endl;
                cout << "Enter Expected Patient Discharge Date: ";
                getline(cin,outDate);
                cout << endl;
                cout << "Enter Physician First Name: ";
                getline(cin, doctorFirstName);
                cout << endl;
                cout << "Enter Physician Last Name: ";
                getline(cin, doctorLastName);
                cout << endl;

                patient.assignPatient(firstName, lastName, id, age, birthDate,
                                      doctorFirstName, doctorLastName, inDate, outDate);
                patient.print();
                break;

            case 3:
                cout << "Enter ID #: ";
                cin  >> id;
                bill.assignId(id);
                cout << endl;
                cout << "Enter Pharmacy Charges: ";
                cin  >> expense;
                bill.assignExpense(expense);
                cout << endl;
                cout << "Enter Doctor Fee: ";
                cin  >> expense;
                bill.assignExpense(expense);
                cout << endl;
                cout << "Enter Room Fee: ";
                cin  >> expense;
                bill.assignId(expense);
                cout << endl;
                bill.printExpenses();
                break;


        }
        cout << "Please select one of the following: " << endl;
        cout << "1) For Doctor Information" << endl;
        cout << "2) For Patient Information" << endl;
        cout << "3) For Billing Information" << endl;
        cout << "**** Enter 4 to Exit Program ****" << endl;

        cin >> userInput;
        cin.ignore(10000, '\n');
    }

    return 0;
}
