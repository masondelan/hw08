#include "header.h"

void billType::assignExpense(double expense)
{
    p_totalExpense += expense;
}

void billType::printExpenses()
{
    cout << "ID: " << p_id << endl;
    cout << "Total Charges: " << p_totalExpense;
}

billType::billType(int id, double totalExpense)
{
    p_id = id;
    p_totalExpense = totalExpense;
}