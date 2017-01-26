#include "../header/text.h"

using namespace std;

Text::Text()
{
    sender = PhoneNumber();
    receiver = PhoneNumber();
    message = "";
}

Text::Text(PhoneNumber sender, PhoneNumber receiver, string message)
{
    this->sender = sender;
    this->receiver = receiver;
    this->message = message;
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