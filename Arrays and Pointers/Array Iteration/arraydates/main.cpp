#include <iostream>

using namespace std;

int main()
{

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //char monthName[] = "April";

    int currentMonth = 3; //april
    int daysThisMonth = daysInMonth[currentMonth];

    for (int i = 0; i < 12; i++)
    {
        cout << "There are " << daysInMonth[i] << " days in month " << (i + 1) << endl;
    }
    return 0;
}
