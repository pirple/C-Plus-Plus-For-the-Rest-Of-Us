#ifndef FULLNAME_H
#define FULLNAME_H

#include "EnhancedString.h"

class FullName : public EnhancedString
{
    public:
        FullName(std::string value);
        string getFirstName();
        string getLastNames();
        string getMiddleNames();
        string getInitials();
        void displayInfo();
        void getFromKeyboard(string message);
        virtual ~FullName();
    protected:
    private:
};

#endif // FULLNAME_H
