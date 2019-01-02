#include "FullName.h"
#include <iostream>
FullName::FullName(std::string value):EnhancedString(value)
{
    //ctor
}

string FullName::getFirstName()
{
    string retVal = this->data;


    unsigned int pos = this->data.find_first_of(ONE_SPACE);
    if (pos != string::npos)
    {
        retVal = this->data.substr(0,pos);
    }
    return retVal;
}

string FullName::getLastNames()
{
    string retVal = this->data;

    if (this->data.length() > 0)
    {
        unsigned int pos = this->data.find_last_of(ONE_SPACE);
        if (pos != string::npos)
        {
            retVal = this->data.substr(pos + 1);
        }
    }
    return retVal;
}

string FullName::getMiddleNames()
{
    string retVal = "";

    unsigned int leftPos = this->data.find_first_of(ONE_SPACE);
    unsigned int rightPos = this->data.find_last_of(ONE_SPACE);
    if (rightPos != string::npos && leftPos != string::npos && leftPos < rightPos)
    {
        retVal = this->data.substr(leftPos + 1, rightPos - leftPos);
    }
    return retVal;
}

string FullName::getInitials()
{
    string retVal = "";

    if (this->data.length() > 0)
    {
        unsigned int position = 0;
        retVal = this->data.substr(position, 1);

        while (true)
        {
            position = this->data.find(ONE_SPACE, position);
            if (position == string::npos)
            {
                break;
            }
            else
            {
                string initial = this->data.substr(position + 1, 1);
                retVal = retVal.append(initial);
            }
            position++;
        }
    }
    return retVal;
}

void FullName::displayInfo()
{
    int namesCount = this->countWords();
    int vowelCount = this->countVowels();

    switch (namesCount)
    {
    case 0:
        cout << "You didn't provide an Information" << endl;
        break;
    case 1:
        cout << "You entered " << this->data << endl;
        cout << "Please include more than one name, with spaces between " << endl;
        break;
    case 2:
        cout << "You entered " << this->data << endl;
        cout << "Your last name is " << this->getLastNames() << endl;
        cout << "Your first name is " << this->getFirstName() << endl;
        cout << "Your initials are " << this->getInitials() << endl;
        cout << "There are " << vowelCount << " vowels in this name" << endl;
        break;
    case 3:
        cout << "You entered " << this->data << endl;
        cout << "Your last name is " << this->getLastNames() << endl;
        cout << "Your middle names are " << this->getMiddleNames() << endl;
        cout << "Your first name is " << this->getFirstName() << endl;
        cout << "Your initials are " << this->getInitials() << endl;
        cout << "There are " << vowelCount << " vowels in this name" << endl;
        break;
    default: //more than three names
        cout << "You entered " << this->data << endl;
        cout << "Your last name is " << this->getLastNames() << endl;
        cout << "Your middle names are " << this->getMiddleNames() << endl;
        cout << "Your first name is " << this->getFirstName() << endl;
        cout << "Your initials are " << this->getInitials() << endl;
        cout << "There are " << vowelCount << " vowels in this name" << endl;
        break;
    }
    cout << endl;
}


FullName::~FullName()
{
    //dtor
}
