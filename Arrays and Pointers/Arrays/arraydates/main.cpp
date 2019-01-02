#include <iostream>

using namespace std;

int main()
{

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 3};

    char monthName[] = "April";

    daysInMonth[15] = 30;


    int currentMonth = 3; //april
    int daysThisMonth = daysInMonth[currentMonth];

    cout << "There are " << daysThisMonth << " days in " << monthName << endl;

    return 0;
}
