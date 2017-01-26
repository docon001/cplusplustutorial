#include "../../catch.hpp"
#include "../code/header/text.h"
#include "../code/header/phone_number.h"

TEST_CASE("Text Test")
{
    PhoneNumber sender(123, 456, 7890);
    PhoneNumber receiver(714, 323, 9876);
    Text text1(sender, receiver, "Hello World");
    Text text2(receiver, sender, "World Hello");
    
    SECTION("Checking for text message")
    {
        INFO("Error getting the message");
        CHECK(text1.getMessage() == "Hello World");
        CHECK(text2.getMessage() == "World Hello");
    }
    SECTION("Checking for sender")
    {
        INFO("Error getting the sender");
        CHECK(text1.getSender() == sender);
        CHECK(text2.getSender() == receiver);
    }
    SECTION("Checking for receiver")
    {
        INFO("Error checking the receiver");
        CHECK(text1.getReceiver() == receiver);
        CHECK(text2.getReceiver() == sender);
    }
}