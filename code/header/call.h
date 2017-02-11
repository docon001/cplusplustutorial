#ifndef CALL_H
#define CALL_H

#include <ctime>
#include "phone_number.h"

class Call
{
    private:
        PhoneNumber caller;
        PhoneNumber receiver;
        int duration;   //in seconds
        time_t date;
        
    public:
        Call();
        Call(PhoneNumber, PhoneNumber, int, time_t date = time(NULL));
        PhoneNumber getCaller() const;
        PhoneNumber getReceiver() const;
        int getDuration() const;
        time_t getDate() const;
        bool operator==(Call) const;
};

#endif