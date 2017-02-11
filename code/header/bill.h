#ifndef BILL_H
#define BILL_H

#include <vector>
#include "text.h"
#include "call.h"
#include "data.h"

const int RATE0 = 0;
const int RATE1 = 1;
const int RATE2 = 2;

class Bill
{
    private:
        std::vector<Text> textMessages;
        std::vector<Call> calls;
        std::vector<Data> dataUsage;
        int phonePlan;
        double textCost;
        double callCost;
        double dataCost;
        double totalCost;
        
    public:
        //Constructors
        Bill();
        Bill(std::vector<Text>, std::vector<Call>, std::vector<Data>, int);
        
        //Get Texts
        std::vector<Text> getTextsByDate(time_t) const;
        std::vector<Text> getTextsByMessage(std::string) const;
        std::vector<Text> getTextsByPhoneNumber(PhoneNumber) const;
        
        //Get Calls
        std::vector<Call> getCallsByDate(time_t) const;
        std::vector<Call> getCallsByPhoneNumber(PhoneNumber) const;
        std::vector<Call> getCallsByDuration(int) const;
        
        //Get data
        Data getDataByDate(time_t) const;
};

#endif