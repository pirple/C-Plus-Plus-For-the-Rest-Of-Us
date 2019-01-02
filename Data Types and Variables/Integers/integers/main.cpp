#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int mySignedInt = -6;
    unsigned int myUnsignedInt = -3;

    mySignedInt *= 2;
    mySignedInt /=5;

    cout << "Signed integers can be no longer than " << INT_MAX << endl;
    cout << "Signed integers can be no smaller than " << INT_MIN << endl;
    cout << "Unsigned integers can be no larger than " << UINT_MAX << endl;
    return 0;
}
