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
        string data;
        EnhancedString(string value);
        void singleSpace();
        void trim();
        int countWords();
        int countVowels();
        void getFromKeyboard(string message);
        virtual ~EnhancedString();
    protected:
    private:
};

#endif // ENHANCEDSTRING_H
