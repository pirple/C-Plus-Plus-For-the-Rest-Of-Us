#include <iostream>

using namespace std;

int daysInMonth(int year, int month)
{
    int returnVal = 0;

    switch(month)
    {
        case 2:
            returnVal = (year % 4 == 0) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            returnVal = 30;
            break;
        default:
            returnVal = 31;
            break;
    }
    return returnVal;
}


int main()
{
    int month = 0;
    int year = 0;
    int day = 0;

    cout << "Enter the Year as 4 digits: ";
    cin >> year;

    cout << "Enter the month as a number (1-12): " ;
    cin >> month;

    cout << "Enter the day of the month as a number (1-31): " ;
    cin >> day;

    int numDays = 0;

    while (month > 1)
    {
        month--;
        numDays += daysInMonth(year, month);
        if (numDays > 180)
        {
            cout << "Greater that 180 days. Exiting early" << endl;
            break;
        }
    }

    numDays += day;

    cout << "This is day " << numDays << " of this year" << endl;

    return 0;
}
