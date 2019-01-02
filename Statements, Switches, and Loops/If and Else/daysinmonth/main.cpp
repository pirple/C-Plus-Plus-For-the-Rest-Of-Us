#include <iostream>

using namespace std;

int main()
{
    int month = 0;
    int year = 0;

    cout << "Enter the Year as 4 digits: ";
    cin >> year;

    cout << "Enter the month as a number (1-12): " ;
    cin >> month;

    int daysInMonth = 0;

    int febDays = 0;

    if (year % 4 == 0)
    {
        febDays = 29;
    }
    else
    {
        febDays = 28;
    }

    if (month == 2)
    {
        daysInMonth = febDays;
    }
    else if (month == 4)
    {
        daysInMonth = 30;
    }
    else if (month == 6)
    {
        daysInMonth = 30;
    }
    else if (month == 9)
    {
        daysInMonth = 30;
    }
    else if (month == 11)
    {
        daysInMonth = 30;
    }
    else
    {
        daysInMonth = 31;
    }

    cout << "There are " << daysInMonth << " days in this month." << endl;
}
