#include "../header/bill.h"

using namespace std;

Bill::Bill()
{
    phonePlan = RATE0;
    textCost = 0;
    dataCost = 0;
    totalCost = 0;
}

Bill::Bill(vector<Text> textMessages, vector<Call> calls, vector<Data> dataUsage, int phonePlan)
{
    this->textMessages = textMessages;
    this->calls = calls;
    this->dataUsage = dataUsage;
    this->phonePlan = phonePlan;
    textCost = 0;
    callCost = 0;
    dataCost = 0;
    totalCost = 0;
}

//Text functions
vector<Text> Bill::getTextsByDate(time_t date) const
{
    vector<Text> searchResult;
    for(unsigned i = 0; i < textMessages.size(); i++)
    {
        if(textMessages.at(i).getDate() == date)
        {
            searchResult.push_back(textMessages.at(i));
        }
    }
    return searchResult;
}

vector<Text> Bill::getTextsByMessage(string message) const
{
    vector<Text> searchResult;
    for(unsigned i = 0; i < textMessages.size(); i++)
    {
        if(textMessages.at(i).getMessage() == message)
        {
            searchResult.push_back(textMessages.at(i));
        }
    }
    return searchResult;
}

vector<Text> Bill::getTextsByPhoneNumber(PhoneNumber number) const
{
    vector<Text> searchResult;
    for(unsigned i = 0; i < textMessages.size(); i++)
    {
        if(textMessages.at(i).getSender() == number || textMessages.at(i).getReceiver() == number)
        {
            searchResult.push_back(textMessages.at(i));
        }
    }
    return searchResult;
}

//Call functions
vector<Call> Bill::getCallsByDate(time_t date) const
{
    vector<Call> searchResult;
    for(unsigned i = 0; i < calls.size(); i++)
    {
        if(calls.at(i).getDate() == date)
        {
            searchResult.push_back(calls.at(i));
        }
    }
    return searchResult;
}

vector<Call> Bill::getCallsByPhoneNumber(PhoneNumber number) const
{
    vector<Call> searchResult;
    for(unsigned i = 0; i < calls.size(); i++)
    {
        if(calls.at(i).getCaller() == number || calls.at(i).getReceiver() == number)
        {
            searchResult.push_back(calls.at(i));
        }
    }
    return searchResult;
}

vector<Call> Bill::getCallsByDuration(int duration) const
{
    vector<Call> searchResult;
    for(unsigned i = 0; i < calls.size(); i++)
    {
        if(calls.at(i).getDuration() == duration)
        {
            searchResult.push_back(calls.at(i));
        }
    }
    return searchResult;
}

//Data functions
Data Bill::getDataByDate(time_t date)
{
    for(unsigned i = 0; i < dataUsage.size(); i++)
    {
        if(dataUsage.at(i).getDate() == date)
        {
            return dataUsage.at(i);
        }
    }
}