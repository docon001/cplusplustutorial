#ifndef BILL_H
#define BILL_H

#include <vector>
#include "text.h"
#include "call.h"
#include "data.h"

class Bill
{
    private:
        vector<Text> textMessages;
        vector<Call> calls;
        vector<Data> dataUsage;
        int phonePlan;
        double textCost;
        double callCost;
        double dataCost;
        double totalCost;
        
    public:
        Bill();
        Bill(std::vector<Text>, std::vector<Call>, std::vector<Data>, int);
};

#endif