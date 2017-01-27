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
        PhoneNumber getCaller();
        PhoneNumber getReceiver();
        int getDuration();
        time_t getDate();
        bool operator==(Call);
};

#endif