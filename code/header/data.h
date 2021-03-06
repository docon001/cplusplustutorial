#ifndef DATA_H
#define DATA_H

#include "phone_number.h"

class Data
{
    private:
        PhoneNumber number;
        long int dataUsed;       //in bytes
        time_t date;
        
    public:
        Data();
        Data(PhoneNumber, long int, time_t date = time(NULL));
        time_t getDate() const;
        PhoneNumber getPhoneNumber() const;
        long int getDataUsed() const;
        void setDataUsed(long int);
        void addDataUsed(long int);
        bool operator==(Data) const;
};

#endif