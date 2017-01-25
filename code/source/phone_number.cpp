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

int PhoneNumber::getAreaCode()
{
    return areaCode;
}

int PhoneNumber::getCentralOfficeCode()
{
    return centralOfficeCode;
}

int PhoneNumber::getLineNumber()
{
    return lineNumber;
}

string PhoneNumber::getNumber()
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