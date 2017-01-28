#include "../header/data.h"

Data::Data()
{
    date = time(NULL);
    number = PhoneNumber();
    dataUsed = 0;
}

Data::Data(PhoneNumber number, long int dataUsed, time_t date)
{
    this->number = number;
    this->dataUsed = dataUsed;
    this->date = date;
}

time_t Data::getDate()
{
    return date;
}

PhoneNumber Data::getPhoneNumber()
{
    return number;
}

long int Data::getDataUsed()
{
    return dataUsed;
}

void Data::setDataUsed(long int dataUsed)
{
    this->dataUsed = dataUsed;
}

void Data::addDataUsed(long int dataUsed)
{
    this->dataUsed += dataUsed;
}