#ifndef FULLNAME_H
#define FULLNAME_H

#include "EnhancedString.h"

class FullName : public EnhancedString
{
    public:
        FullName(std::string value);
        virtual ~FullName();
        void displayInfo();
    protected:
    private:
};

#endif // FULLNAME_H
