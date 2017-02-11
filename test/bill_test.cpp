#include "../../catch.hpp"
#include "../code/header/bill.h"

TEST_CASE("Bill Test")
{
    //Set up phone numbers
    PhoneNumber number1(123,456,7890), number2(714,636,5841),
                number3(800,666,7867), number4(949,223,1039);
    
    //Set up texts
    Text text1(number1, number2, "hi", 400),
         text2(number2, number1, "hello world", 450),
         text3(number1, number2, "my name isn't world", 512),
         text4(number3, number1, "hey!", 301),
         text5(number1, number4, "my dude!", 466),
         text6(number4, number3, "hello", 512),
         text7(number2, number1, "hi", 435);
    
    //Set up text vector
    std::vector<Text> textVector;
    textVector.push_back(text1);
    textVector.push_back(text2);
    textVector.push_back(text3);
    textVector.push_back(text4);
    textVector.push_back(text5);
    textVector.push_back(text6);
    textVector.push_back(text7);
    
    //Set up calls
    Call call1(number1, number2, 58, 9000), 
         call2(number2, number1, 77, 1001),
         call3(number4, number3, 12, 15234),
         call4(number1, number2, 8, 15234),
         call5(number2, number4, 77, 4591);
    
    //Set up call vector
    std::vector<Call> callVector;
    callVector.push_back(call1);
    callVector.push_back(call2);
    callVector.push_back(call3);
    callVector.push_back(call4);
    callVector.push_back(call5);
    
    std::vector<Data> dataUsage;
    Bill bill1;
    Bill bill2(textVector, callVector, dataUsage, RATE0);
    SECTION("Text Tests")
    {
        SECTION("Get texts by date")
        {
            INFO("Error checking for texts by date");
            std::vector<Text> test;
            test.push_back(text2);
            CHECK(bill2.getTextsByDate(450) == test);
            CHECK(bill2.getTextsByDate(400).at(0).getMessage() == "hi");
            CHECK(bill2.getTextsByDate(301).at(0).getSender() == number3);
            
            //Reset test to empty and fill with two texts sent at the same time
            test.clear();
            test.push_back(text3);
            test.push_back(text6);
            CHECK(bill2.getTextsByDate(512) == test);
        }
        
        SECTION("Get texts by message")
        {
            INFO("Error checking for texts by message");
            std::vector<Text> test;
            test.push_back(text3);
            CHECK(bill2.getTextsByMessage("my name isn't world") == test);
            
            //Reset test to empty and fill with two texts with the same message
            test.clear();
            test.push_back(text1);
            test.push_back(text7);
            CHECK(bill2.getTextsByMessage("hi") == test);
            
            //Reset test and check to ensure it checks the string for EXACT matches
            test.clear();
            test.push_back(text2);
            test.push_back(text7);
            CHECK_FALSE(bill2.getTextsByMessage("hello") == test);
        }
        
        SECTION("Get texts by phone number")
        {
            INFO("Error checking for texts by phone number");
            std::vector<Text> test;
            //Test for phone number 1
            test.push_back(text1);
            test.push_back(text2);
            test.push_back(text3);
            test.push_back(text4);
            test.push_back(text5);
            test.push_back(text7);
            CHECK(bill2.getTextsByPhoneNumber(number1) == test);
            
            //Reset test and check for number 3
            test.clear();
            test.push_back(text4);
            test.push_back(text6);
            CHECK(bill2.getTextsByPhoneNumber(number3) == test);
        }
    }
    
    SECTION("Call Tests")
    {
        SECTION("Get calls by date")
        {
            INFO("Error checking for calls by date");
            std::vector<Call> test;
            //Test for date 15234
            time_t date = 15234;
            test.push_back(call3);
            test.push_back(call4);
            CHECK(bill2.getCallsByDate(date) == test);
        }
        
        SECTION("Get calls by phone number")
        {
            INFO("Error checking for calls by phone number");
            std::vector<Call> test;
            //Test for phone number 1
            test.push_back(call1);
            test.push_back(call2);
            test.push_back(call4);
            CHECK(bill2.getCallsByPhoneNumber(number1) == test);
            
            //Reset and test for phone number 3
            test.clear();
            test.push_back(call3);
            CHECK(bill2.getCallsByPhoneNumber(number3) == test);
        }
        
        SECTION("Get calls by duration")
        {
            INFO("Error checking for calls by duration");
            std::vector<Call> test;
            //Test for duration 77
            int duration = 77;
            test.push_back(call2);
            test.push_back(call5);
            CHECK(bill2.getCallsByDuration(duration) == test);
            
            //Reset and check for duration 12
            duration = 12;
            test.clear();
            test.push_back(call3);
        }
    }
    
    SECTION("Data Tests")
    {
        SECTION("Get data by date")
        {
            INFO("Error checking for data by date");
            //Test for
        }
    }
}

