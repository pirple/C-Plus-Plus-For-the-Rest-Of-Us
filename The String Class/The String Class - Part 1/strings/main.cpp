#include <iostream>
#include <string.h>


using namespace std;

string singleSpace(string anyString)
{
    string retVal = anyString;
    const string TWO_SPACES = "  ";

    bool found = true;
    while (found == true)
    {
        unsigned int pos = retVal.find(TWO_SPACES);
        if (pos == string::npos)
        {
            found = false;
        }
        else
        {
            retVal = retVal.erase(pos, 1);
        }
    }
    return retVal;
}

string trim(string anyString)
{
    string retVal = anyString;
    int lastPos = retVal.length() -1;

    bool found = true;

    while(found == true && lastPos >= 0)
    {
        if(retVal.substr(lastPos, 1) == " ")
        {
            retVal = retVal.erase(lastPos, 1);
        }
        else if (retVal.substr(0, 1) == " ")
        {
            retVal = retVal.erase(0, 1);
        }
        else
        {
            found = false;
        }
        lastPos = retVal.length() -1;
    }

    return retVal;
}

int main()
{
    string myString1 = "AB   C ";
    string myString2 = " HELLO     WORLD   ";
    string myString3 = "  ";
    string myString4 = "A   ";

    cout << trim(singleSpace(myString1)) << "." << endl;
    cout << trim(singleSpace(myString2)) << "." << endl;
    cout << trim(singleSpace(myString3)) << "." << endl;
    cout << trim(singleSpace(myString4)) << "." << endl;

    return 0;
}
