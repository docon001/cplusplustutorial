#ifndef TEXT_H
#define TEXT_H

#include <string>
#include <ctime>
#include "phone_number.h"

class Text
{
    private:
        PhoneNumber sender;
        PhoneNumber receiver;
        std::string message;
        time_t date;
        
    public:
        Text();
        Text(PhoneNumber, PhoneNumber, std::string, time_t date = time(NULL));
        std::string getMessage();
        PhoneNumber getSender();
        PhoneNumber getReceiver();
        time_t getDate();
};

#endif