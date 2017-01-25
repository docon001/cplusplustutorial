#include "../header/text.h"

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