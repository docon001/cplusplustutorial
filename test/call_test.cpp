#include "../../catch.hpp"
#include "../code/header/call.h"

TEST_CASE("Call Test")
{
    PhoneNumber caller1(567,123,7890);
    PhoneNumber caller2(323,636,2232);
    PhoneNumber receiver1(123,456,7890);
    PhoneNumber receiver2(714,543,9848);
    Call call1(caller1, receiver1, 60, 10000000);
    Call call2(caller2, receiver2, 169);
    
    SECTION("Checking for caller")
    {
        INFO("Error getting the caller");
        CHECK(call1.getCaller() == caller1);
        CHECK(call2.getCaller() == caller2);
    }
    SECTION("Checking for receiver")
    {
        INFO("Error getting the receiver");
        CHECK(call1.getReceiver() == receiver1);
        CHECK(call2.getReceiver() == receiver2);
    }
    SECTION("Checking for duration")
    {
        INFO("Error getting the duration");
        CHECK(call1.getDuration() == 60);
        CHECK(call2.getDuration() == 169);
    }
    SECTION("Checking for date")
    {
        INFO("Error getting the date");
        CHECK(call1.getDate() == 10000000);
        CHECK(call2.getDate() == time(NULL));
    }
}