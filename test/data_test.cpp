#include "../../catch.hpp"
#include "../code/header/data.h"

TEST_CASE("Data Test")
{
    PhoneNumber phone1(123,456,7890);
    PhoneNumber phone2(646,797,1111);
    Data data1(phone1, 900000);
    Data data2(phone2, 185839, 2738382);
    
    SECTION("Checking for date")
    {
        INFO("Error checking the date");
        CHECK(data1.getDate() == time(NULL));
        CHECK(data2.getDate() == 2738382);
    }
    SECTION("Checking for phone number")
    {
        INFO("Error checking the phone number");
        CHECK(data1.getPhoneNumber() == phone1);
        CHECK(data2.getPhoneNumber() == phone2);
    }
    SECTION("Checking for data used")
    {
        INFO("Error checking the data used");
        CHECK(data1.getDataUsed() == 900000);
        CHECK(data2.getDataUsed() == 185839);
    }
    SECTION("Checking for resetting data used")
    {
        INFO("Error resetting the data used");
        data1.setDataUsed(15);
        data2.setDataUsed(4874);
        CHECK(data1.getDataUsed() == 15);
        CHECK(data2.getDataUsed() == 4874);
    }
    SECTION("Checking for adding to data used")
    {
        INFO("Error adding to the data used");
        data1.addDataUsed(10);
        data2.addDataUsed(5743);
        CHECK(data1.getDataUsed() == 900010);
        CHECK(data2.getDataUsed() == 191582);
    }
}