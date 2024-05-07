#include "Invoice.h"

Invoice::Invoice()
{
    invoiceId="";
    dollarsOwed=0;
}

Invoice::Invoice(string invoiceId)
{
    this->invoiceId=invoiceId; //everytime a function is called, even the constructor, a "self" "this" object is passed in
    dollarsOwed=0;
}

void Invoice::addServiceCost(int costDollars)
{
    //Adds the cost of a service to the current invoice 
    //in dollars. Accepts only positive dollar amounts.
    if(costDollars>0)
    {
        dollarsOwed+=costDollars;
    }
    else
    {
        cout<< "The amount entered is not a positive amount."<<endl;
    }

}

int Invoice::getDollarsOwed()
{
    return dollarsOwed;
}

string Invoice::getInvoiceId()
{
    return invoiceId;
}