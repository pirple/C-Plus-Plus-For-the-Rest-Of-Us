#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void display(string message, int value)
{
    bitset<8> myBitset(value);
    cout << message;
    cout << myBitset.to_string() << " (" << myBitset.to_ulong() << ")" << endl;
}

int main()
{
    int myNumber = 15;
    int valueA = 12;
    int valueB = 139;

    display("Starting Value:      ", myNumber);
    cout << endl;

    myNumber <<= 1;
    display("Shifted Left 1:      ", myNumber);
    cout << endl;

    myNumber >>= 2;
    display("Shifted Right 2:     ", myNumber);
    cout << endl;

    display("Bitwise NOT:         ", ~myNumber);
    cout << endl;

    display("First number         ", valueA);
    display("Second number:       ", valueB);
    display("    OR Result:       ", valueA | valueB);
    cout << endl;

    display("First number         ", valueA);
    display("Second number:       ", valueB);
    display("    AND Result:      ", valueA & valueB);
    cout << endl;

    display("First number         ", valueA);
    display("Second number:       ", valueB);
    display("    XOR Result:      ", valueA ^ valueB);
    cout << endl;

    return 0;
}
