#ifndef TEXT_H
#define TEXT_H

#include <string>

class Text
{
    protected:
        PhoneNumber sender;
        PhoneNumber receiver;
        string message;
        
    public:
        Text();
        Text(PhoneNumber, PhoneNumber, string);
        string getMessage();
        PhoneNumber getSender();
        PhoneNumber getReceiver();
};

#endif