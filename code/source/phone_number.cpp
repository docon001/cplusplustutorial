#include "../header/phone_number.h"

using namespace std;

PhoneNumber::PhoneNumber()
{
    areaCode = 0;
    centralOfficeCode = 0;
    lineNumber = 0;
    number = "000-000-0000";
}

PhoneNumber::PhoneNumber(int areaCode, int centralOfficeCode, int lineNumber)
{
    this->areaCode = areaCode;
    this->centralOfficeCode = centralOfficeCode;
    this->lineNumber = lineNumber;
    setString();
}

int PhoneNumber::getAreaCode() const
{
    return areaCode;
}

int PhoneNumber::getCentralOfficeCode() const
{
    return centralOfficeCode;
}

int PhoneNumber::getLineNumber() const
{
    return lineNumber;
}

string PhoneNumber::getNumber() const
{
    return number;
}

void PhoneNumber::setAreaCode(int areaCode)
{
    this->areaCode = areaCode;
    setString();
}

void PhoneNumber::setCentralOfficeCode(int centralOfficeCode)
{
    this->centralOfficeCode = centralOfficeCode;
    setString();
}

void PhoneNumber::setLineNumber(int lineNumber)
{
    this->lineNumber = lineNumber;
    setString();
}

void PhoneNumber::setString()
{
    number = '(' + to_string(areaCode) + ')' + to_string(centralOfficeCode) + '-' + to_string(lineNumber);
}

bool PhoneNumber::operator==(PhoneNumber number) const
{
    bool AC = this->getAreaCode() == number.getAreaCode();
    bool COC = this->getCentralOfficeCode() == number.getCentralOfficeCode();
    bool LN = this->getLineNumber() == number.getLineNumber();
    bool str = this->getNumber() == number.getNumber();
    
    return (AC && COC && LN && str);
}