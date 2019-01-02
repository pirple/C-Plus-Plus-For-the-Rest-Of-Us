#include "EnhancedString.h"
#include <iostream>

const string EnhancedString::ONE_SPACE = " ";
const string EnhancedString::TWO_SPACES = "  ";
const string EnhancedString::VOWELS = "aeiouAEIOU";

EnhancedString::EnhancedString(string value)
{
    this->data = value;
    this->trim();
    this->singleSpace();
}

void EnhancedString::singleSpace()
{
    bool found = true;
    while (found == true)
    {
        unsigned int pos = this->data.find(TWO_SPACES);
        if (pos == string::npos)
        {
            found = false;
        }
        else
        {
            this->data = this->data.erase(pos, 1);
        }
    }
}

void EnhancedString::trim()
{
    int lastPos = this->data.length() -1;

    bool found = true;

    while(found == true && lastPos >= 0)
    {
        if(this->data.substr(lastPos, 1) == " ")
        {
            this->data = this->data.erase(lastPos, 1);
        }
        else if (this->data.substr(0, 1) == " ")
        {
            this->data = this->data.erase(0, 1);
        }
        else
        {
            found = false;
        }
        lastPos = this->data.length() -1;
    }
}

int EnhancedString::countWords()
{
    int wordCount = 0;

    if (this->data.length() > 0)
    {
        wordCount++;
        unsigned int position = 0;
        while (true)
        {
            position = this->data.find(ONE_SPACE, position);
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

int EnhancedString::countVowels()
{
    int vowelCount = 0;


    if (this->data.length() > 0)
    {
        string::iterator i;
        for (i = this->data.begin(); i != this->data.end(); i++)
        {
            char c = *i;
            unsigned int pos = VOWELS.find(c);
            if (pos != string::npos)
            {
                vowelCount++;
            }
        }
    }
    return vowelCount;
}

void EnhancedString::getFromKeyboard(string message)
{
    cout << message << endl;
    getline(cin, this->data);
}

EnhancedString::~EnhancedString()
{
    //dtor
}
