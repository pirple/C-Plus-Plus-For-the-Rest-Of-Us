#include <iostream>

using namespace std;

int main()
{
    char myCharacter = 65;

    for (int num=0; num < 256; num++)
    {
        myCharacter = (char)num;
        cout << "The character for " << num << " is " << myCharacter <<endl;
    }

    return 0;
}
