#include <iostream>

using namespace std;

int main()
{
    // First Example
//    float myPrice = 200.0F;
//    myPrice ++;
//
//    bool myResult = false;
//    myResult = (myPrice != 200.0F);
//
//    myResult = !myResult;
//    myResult = !myResult;
//    myResult = !myResult;
//
//    cout << "My price is " << myPrice << endl;

    //Second Example
    int year = 2015;
    int month = 2;

    bool isLeapYear = (year % 4 == 0);

    bool has28Days = (!isLeapYear && month == 2);
    bool has29Days = (isLeapYear && month == 2);
    bool has30Days = (month == 11 || month == 4 || month == 6 || month == 9 );
    bool has31Days = (!has28Days && !has29Days && !has30Days);

    return 0;
}
