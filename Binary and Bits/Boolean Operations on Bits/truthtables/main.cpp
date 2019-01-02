#include <iostream>

using namespace std;

char onBitNot(char myBit)
{
    char returnBit;
    if (myBit == '1')
    {
        returnBit = '0';
    }
    else if (myBit == '0')
    {
        returnBit = '1';
    }
    return returnBit;
}

char oneBitOr(char bit1, char bit2)
{
    char returnBit = '0';
    if (bit1 == '1')
    {
        returnBit = '1';
    }
    if (bit2 == '1')
    {
        returnBit = '1';
    }
    return returnBit;
}

char oneBitAnd(char bit1, char bit2)
{
    char returnBit = '0';
    if (bit1 == '1')
    {
        if (bit2 == '1')
        {
            returnBit = '1';
        }
    }

    return returnBit;
}

void truthTableAnd()
{
    cout << "Truth Table for AND" << endl;
    cout << "0 AND 0 = " << oneBitAnd('0', '0') << endl;
    cout << "0 AND 1 = " << oneBitAnd('0', '1') << endl;
    cout << "1 AND 0 = " << oneBitAnd('1', '0') << endl;
    cout << "1 AND 1 = " << oneBitAnd('1', '1') << endl << endl;
}

void truthTableOr()
{
    cout << "Truth Table for OR" << endl;
    cout << "0 OR 0 = " << oneBitOr('0', '0') << endl;
    cout << "0 OR 1 = " << oneBitOr('0', '1') << endl;
    cout << "1 OR 0 = " << oneBitOr('1', '0') << endl;
    cout << "1 OR 1 = " << oneBitOr('1', '1') << endl << endl;
}

void truthTableNot()
{
    cout << "Truth Table for NOT" << endl;
    cout << "NOT 0 = " << onBitNot('0') << endl;
    cout << "NOT 1 = " << onBitNot('1') << endl << endl;
}

int main()
{
    truthTableNot();
    truthTableOr();
    truthTableAnd();
    return 0;
}
