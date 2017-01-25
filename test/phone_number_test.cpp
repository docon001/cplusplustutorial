#include "../../catch.hpp"
#include "../code/header/phone_number.h"

TEST_CASE("Phone Number Test")
{
    PhoneNumber phone1(123, 456, 7890);
    PhoneNumber phone2(198, 765, 4321);
    
    SECTION("Get area code")
    {
        INFO("Error checking area code");
        CHECK(phone1.getAreaCode() == 123);
        CHECK(phone2.getAreaCode() == 198);
    }
    SECTION("Get central office code")
    {
        INFO("Error checking central office code");
        CHECK(phone1.getCentralOfficeCode() == 456);
        CHECK(phone2.getCentralOfficeCode() == 765);
    }
    SECTION("Get line number")
    {
        INFO("Error checking line number");
        CHECK(phone1.getLineNumber() == 7890);
        CHECK(phone2.getLineNumber() == 4321);
    }
    SECTION("Get phone number string")
    {
        INFO("Error checking phone number string");
        CHECK(phone1.getNumber() == "(123)456-7890");
        CHECK(phone2.getNumber() == "(198)765-4321");
    }
    
    SECTION("Set area code")
    {
        INFO("Error setting the area code");
        phone1.setAreaCode(714);
        CHECK(phone1.getAreaCode() == 714);
        phone2.setAreaCode(949);
        CHECK(phone2.getAreaCode() == 949);
    }
    SECTION("Set central office code")
    {
        INFO("Error setting central office code");
        phone1.setCentralOfficeCode(739);
        CHECK(phone1.getCentralOfficeCode() == 739);
        phone2.setCentralOfficeCode(636);
        CHECK(phone2.getCentralOfficeCode() == 636);
    }
    SECTION("Set line number")
    {
        INFO("Error setting line number");
        phone1.setLineNumber(8888);
        CHECK(phone1.getLineNumber() == 8888);
        phone2.setLineNumber(5734);
        CHECK(phone2.getLineNumber() == 5734);
    }
    SECTION("Set phone number string")
    {
        INFO("Error setting the phone number string");
        phone1.setAreaCode(949);
        CHECK(phone1.getNumber() == "(949)456-7890");
        phone1.setCentralOfficeCode(343);
        CHECK(phone1.getNumber() == "(949)343-7890");
        phone1.setLineNumber(5284);
        CHECK(phone1.getNumber() == "(949)343-5284");
    }
}