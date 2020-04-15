/*************************************************
 * Mason Delan * CS1B TTH 7:30-9:50p * HW08      *
 * HW08        * Due: Tuesday, April  14, 2020   *
 *************************************************/
 /************************************************
  * This program computerizes the billing system
  * of a hospital, through the use of classes
  * and inheritance.
  ************************************************/
#ifndef HW08_HEADER_H
#define HW08_HEADER_H

#include <iostream>
#include <string>
using namespace std;

class personType
{
public:
    void print() const;
    void setName(string first, string last);
    string getFirstName() const
    {
        return p_firstName;
    }
    string getLastName() const
    {
        return p_lastName;
    }
    //constructor
    personType(string first = " ", string last = " ");

private:
    string p_firstName;
    string p_lastName;
};



class doctorType: public personType
{
public:
    void assignDoctor(string first, string last, string special = " ");

    void print();
    string getSpecialty() const
    {
        return p_specialty;
    }


    doctorType(string first = " ", string last = " ", string special = " ");

private:
    string p_specialty;

};



class dateType
{
public:
    void assignDate(string birthDate, string inDate, string outDate);

    void print();
    string getBirthDate() const
    {
        return p_birthDate;
    }

    string getInDate() const
    {
        return p_inDate;
    }

    string getOutDate() const
    {
        return p_outDate;
    }

    dateType(string birthDate = " ",string inDate = " ", string outDate = " ");

private:
    string p_birthDate;
    string p_inDate;
    string p_outDate;
};



class patientType:public personType
{
public:
    //mutator
    void assignPatient(string first, string last, int id, int age, string birthDate,
                       string doctorFirst, string doctorLast, string inDate, string outDate);

    void print();
    int getID() const
    {
        return p_id;
    }

    int getAge() const
    {
        return p_age;
    }

    string getPatientFirstName() const
    {
        return personType::getFirstName();
    }

    string getPatientLastName() const
    {
        return personType::getLastName();
    }

    string getDoctorFirstName() const
    {
        return p_doctorData.getFirstName();
    }

    string getDoctorLastName() const
    {
        return p_doctorData.getLastName();
    }

    string birthDate() const
    {
        return p_dateData.getBirthDate();
    }

    string inDate() const
    {
        return p_dateData.getInDate();
    }

    string outDate() const
    {
        return p_dateData.getOutDate();
    }


    patientType(string first = " ", string last = " ", int id = 0, int age = 0,
                string birthDate = " ", string doctorFirst = " ", string doctorLast = " ",
                string inDate = " ", string outDate = " ");

private:
    int p_id;
    int p_age;
    doctorType p_doctorData;
    dateType p_dateData;
};


class billType
{
public:
    void assignId(int id)
    {
        p_id = id;
    }

    void assignExpense(double expense);

    void printExpenses();

    billType(int id = 0, double totalExpense = 0.0);
private:
    int p_id;
    double p_totalExpense;
};


#endif //HW08_HEADER_H
