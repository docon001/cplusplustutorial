#include "../header/text.h"

using namespace std;

Text::Text()
{
    sender = PhoneNumber();
    receiver = PhoneNumber();
    message = "";
    date = 0;
}

Text::Text(PhoneNumber sender, PhoneNumber receiver, string message, time_t date)
{
    this->sender = sender;
    this->receiver = receiver;
    this->message = message;
    this->date = date;
}

string Text::getMessage()
{
    return message;
}

PhoneNumber Text::getSender()
{
    return sender;
}

PhoneNumber Text::getReceiver()
{
    return receiver;
}

time_t Text::getDate()
{
    return date;
}