#include <iostream>
#include <math.h>
#include <bitset>

#include "helpers.h"

using namespace std;
using namespace helpers;

int main()
{
    char myBitList[] = "10000000";

    int result = helpers::bitsToInt(myBitList, 8, true);
    cout << "Result is " << result << endl;

    int myValue = 15;
    cout << myValue << " in binary is ";
    showBits(myValue, 8);
    cout << endl;

    bitset<8> myBitset (string("01111111"));
    cout << "The Binary number " << myBitset.to_string() << " has a decimal value of " << myBitset.to_ulong() << endl;

    bitset<8> myOtherBitset (15);
    cout << "The number " << myOtherBitset.to_ulong() << " has a binary representation of " << myOtherBitset.to_string() << endl;

    return 0;
}
