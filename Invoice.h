#ifndef INVOICE_H
#define INVOICE_H
#include <string>
#include <iostream>
using namespace std;


class Invoice {
    private:
        string invoiceId;
        int dollarsOwed;
    public:
        Invoice();
        Invoice(string invoiceId);
        void addServiceCost(int costDollars);
        int getDollarsOwed();
        string getInvoiceId();

};




#endif
