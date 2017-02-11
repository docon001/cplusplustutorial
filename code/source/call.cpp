#include "../header/call.h"

Call::Call()
{
    caller = PhoneNumber();
    receiver = PhoneNumber();
    duration = 0;
    date = 0;
}

Call::Call(PhoneNumber caller, PhoneNumber receiver, int duration, time_t date /*= time(NULL)*/)
{
    this->caller = caller;
    this->receiver = receiver;
    this->duration = duration;
    this->date = date;
}

PhoneNumber Call::getCaller() const
{
    return caller;
}

PhoneNumber Call::getReceiver() const
{
    return receiver;
}

int Call::getDuration() const
{
    return duration;
}

time_t Call::getDate() const
{
    return date;
}

bool Call::operator==(Call call) const
{
    bool callersMatch = (this->caller == call.getCaller());
    bool receiversMatch = (this->receiver == call.getReceiver());
    bool durationsMatch = (this->duration == call.getDuration());
    bool timesMatch = (this->date == call.getDate());
    
    return (callersMatch && receiversMatch && durationsMatch && timesMatch);
}