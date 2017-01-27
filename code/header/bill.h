#ifndef BILL_H
#define BILL_H

#include <vector>

class Bill
{
    private:
        vector<Text> textMessages;
        vector<Call> calls;
        vector<Data> dataUsage;
};

#endif