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

time_t Data::getDate() const
{
    return date;
}

PhoneNumber Data::getPhoneNumber() const
{
    return number;
}

long int Data::getDataUsed() const
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

bool Data::operator==(Data data) const
{
    bool numberMatch = this->number == data.getPhoneNumber();
    bool dataUsedMatch = this->dataUsed == data.getDataUsed();
    bool dateMatch = this->date == data.getDate();
    
    return numberMatch && dataUsedMatch && dateMatch;
}