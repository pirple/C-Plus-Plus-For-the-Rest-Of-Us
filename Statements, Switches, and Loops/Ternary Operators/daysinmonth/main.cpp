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

    switch(month)
    {
        case 2:
            daysInMonth = (year % 4 == 0) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    cout << "There are " << daysInMonth << " days in this month." << endl;
}
