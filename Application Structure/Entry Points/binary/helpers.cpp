#include <iostream>
#include <math.h>

#include <bitset>
#include <string>

using namespace std;

namespace helpers
{
    int bitsToInt(char bitList[], int bitCount, bool twosCompliment)
    {
        int result = 0;
        int placeValue = pow(2, bitCount - 1);
        char bit = '0';

        for (int bitNum = 0; bitNum < bitCount; bitNum++)
        {
            bit = bitList[bitNum];
            result += (bit == '1') ? placeValue: 0;
            placeValue *= 0.5;
        }

        if (twosCompliment == true && bitList[0] == '1')
        {
            placeValue = pow(2, bitCount);
            result -= placeValue;

        }

        return result;
    }

    void showBits(int value, int bitCount)
    {
        int placeValue = pow(2, bitCount - 1);
        for (int bitNum = 0; bitNum < bitCount; bitNum++)
        {
            char bit = '0';
            if (value >= placeValue)
            {
                bit = '1';
                value -= placeValue;
            }
            cout << bit;
            placeValue *= 0.5;
        }
    }
}
