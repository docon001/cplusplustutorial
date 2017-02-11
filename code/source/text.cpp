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

string Text::getMessage() const
{
    return message;
}

PhoneNumber Text::getSender() const
{
    return sender;
}

PhoneNumber Text::getReceiver() const
{
    return receiver;
}

time_t Text::getDate() const
{
    return date;
}

bool Text::operator==(Text text) const
{
    bool senderMatch = this->sender == text.getSender();
    bool receiverMatch = this->receiver == text.getReceiver();
    bool messageMatch = this->message == text.getMessage();
    bool dateMatch = this->date == text.getDate();
    
    return senderMatch && receiverMatch && messageMatch && dateMatch;
}