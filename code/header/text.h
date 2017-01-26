#ifndef TEXT_H
#define TEXT_H

#include <string>
#include "phone_number.h"

class Text
{
    private:
        PhoneNumber sender;
        PhoneNumber receiver;
        std::string message;
        
    public:
        Text();
        Text(PhoneNumber, PhoneNumber, std::string);
        std::string getMessage();
        PhoneNumber getSender();
        PhoneNumber getReceiver();
};

#endif