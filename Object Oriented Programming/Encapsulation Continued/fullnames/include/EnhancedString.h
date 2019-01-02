#ifndef ENHANCEDSTRING_H
#define ENHANCEDSTRING_H

#include <string>

using namespace std;

class EnhancedString
{
    public:
        static const string ONE_SPACE;
        static const string TWO_SPACES;
        static const string VOWELS;
        EnhancedString(string value);
        int countWords();
        int countVowels();
        virtual void getFromKeyboard(string message);
        virtual ~EnhancedString();
    protected:
        string data;
        void singleSpace();
        void trim();
    private:
};

#endif // ENHANCEDSTRING_H
