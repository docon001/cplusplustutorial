#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H

#include <string>

class PhoneNumber
{
    private:
        int areaCode;
        int centralOfficeCode;
        int lineNumber;
        std::string number;
        
    public:
        PhoneNumber();
        PhoneNumber(int,int,int);
        int getAreaCode();
        int getCentralOfficeCode();
        int getLineNumber();
        std::string getNumber();
        void setAreaCode(int);
        void setCentralOfficeCode(int);
        void setLineNumber(int);
        void setString();
        bool operator==(PhoneNumber);
};

#endif