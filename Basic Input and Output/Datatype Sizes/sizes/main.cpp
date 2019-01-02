#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int numBytes = 0;
    unsigned int myUnsignedInt = UINT_MAX;
    cout << "The maximum value our integer can hold is " << myUnsignedInt << endl;
    numBytes = sizeof(myUnsignedInt);
    cout <<"The number of bytes required to store our integer is " << numBytes << endl << endl;

    unsigned long myUnsignedLong = ULONG_MAX;
    cout << "The maximum value our long integer can hold is " << myUnsignedLong << endl;
    numBytes = sizeof(myUnsignedLong);
    cout <<"The number of bytes required to store our long integer is " << numBytes << endl << endl;

    unsigned long long myUnsignedLongLong = ULONG_LONG_MAX;
    cout << "The maximum value our long-long integer can hold is " << myUnsignedLongLong << endl;
    numBytes = sizeof(myUnsignedLongLong);
    cout <<"The number of bytes required to store our long-long integer is " << numBytes << endl << endl;

    unsigned short myUnsignedShort = USHRT_MAX;
    cout << "The maximum value our short integer can hold is " << myUnsignedShort << endl;
    numBytes = sizeof(myUnsignedShort);
    cout <<"The number of bytes required to store our short integer is " << numBytes << endl << endl;

    unsigned char myUnsignedByte = UCHAR_MAX;
    cout << "The maximum value our byte can hold is " << (int)myUnsignedByte << endl;
    numBytes = sizeof(myUnsignedByte);
    cout <<"The number of bytes required to store our byte is " << numBytes << endl << endl;

    wchar_t myWideChar = WCHAR_MAX;
    cout << "The maximum value our wide char can hold is " << (int)myWideChar << endl;
    numBytes = sizeof(myWideChar);
    cout <<"The number of bytes required to store our wide char is " << numBytes << endl << endl;

    return 0;
}
