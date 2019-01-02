#include <iostream>
#include <string.h>


using namespace std;

const string ONE_SPACE = " ";
const string TWO_SPACES = "  ";

string singleSpace(string anyString)
{
    string retVal = anyString;

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

int countNames(string fullName)
{
    int wordCount = 0;
    fullName = trim(singleSpace(fullName));

    if (fullName.length() > 0)
    {
        wordCount++;
        unsigned int position = 0;
        while (true)
        {
            position = fullName.find(ONE_SPACE, position);
            if (position == string::npos)
            {
                break;
            }
            else
            {
                wordCount++;
            }
            position++;
        }
    }
    return wordCount;
}

string getFirstName(string fullName)
{
    string retVal = fullName;


    unsigned int pos = fullName.find_first_of(ONE_SPACE);
    if (pos != string::npos)
    {
        retVal = fullName.substr(0,pos);
    }
    return retVal;
}

string getLastNames(string fullName)
{
    string retVal = fullName;

    if (fullName.length() > 0)
    {
        unsigned int pos = fullName.find_last_of(ONE_SPACE);
        if (pos != string::npos)
        {
            retVal = fullName.substr(pos + 1);
        }
    }
    return retVal;
}

string getMiddleNames (string fullName)
{
    string retVal = "";

    unsigned int leftPos = fullName.find_first_of(ONE_SPACE);
    unsigned int rightPos = fullName.find_last_of(ONE_SPACE);
    if (rightPos != string::npos && leftPos != string::npos && leftPos < rightPos)
    {
        retVal = fullName.substr(leftPos + 1, rightPos - leftPos);
    }
    return retVal;
}

string getInitials(string fullName)
{
    string retVal = "";

    if (fullName.length() > 0)
    {
        unsigned int position = 0;
        retVal = fullName.substr(position, 1);

        while (true)
        {
            position = fullName.find(ONE_SPACE, position);
            if (position == string::npos)
            {
                break;
            }
            else
            {
                string initial = fullName.substr(position + 1, 1);
                retVal = retVal.append(initial);
            }
            position++;
        }
    }
    return retVal;
}

void displayNameInfo(string fullName)
{
    fullName = trim(fullName);
    fullName = singleSpace(fullName);

    int namesCount = countNames(fullName);

    switch (namesCount)
    {
    case 0:
        cout << "You didn't provide an Information" << endl;
        break;
    case 1:
        cout << "You entered " << fullName << endl;
        cout << "Please include more than one name, with spaces between " << endl;
        break;
    case 2:
        cout << "You entered " << fullName << endl;
        cout << "Your last name is " << getLastNames(fullName) << endl;
        cout << "Your first name is " << getFirstName(fullName) << endl;
        cout << "Your initials are " << getInitials(fullName) << endl;
        break;
    case 3:
        cout << "You entered " << fullName << endl;
        cout << "Your last name is " << getLastNames(fullName) << endl;
        cout << "Your middle names are " << getMiddleNames(fullName) << endl;
        cout << "Your first name is " << getFirstName(fullName) << endl;
        cout << "Your initials are " << getInitials(fullName) << endl;
        break;
    default: //more than three names
        cout << "You entered " << fullName << endl;
        cout << "Your last name is " << getLastNames(fullName) << endl;
        cout << "Your middle names are " << getMiddleNames(fullName) << endl;
        cout << "Your first name is " << getFirstName(fullName) << endl;
        cout << "Your initials are " << getInitials(fullName) << endl;
        break;
    }
    cout << endl;
}

string getFullName()
{
    string message = "Please enter your full name ";
    string fullName;
    cout << message << endl;
    getline(cin, fullName);

    return fullName;
}
int main()
{
    string fullName1 = " Snubby";
    string fullName2 = " Shelia Becomin Rondamountin";
    string fullName3 = " Arthur Lord Chicken Sandwich";
    string fullName4 = getFullName();

    displayNameInfo(fullName1);
    displayNameInfo(fullName2);
    displayNameInfo(fullName3);
    displayNameInfo(fullName4);

    return 0;
}
