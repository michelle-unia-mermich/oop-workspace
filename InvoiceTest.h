// InvoiceTest.h

/*
Write full test coverage of all the public functions 
of the Invoice class, including the constructor
*/

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        } //CHANGING THE SCOPE

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-1);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(0);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

    }

    // Add other test functions here, to test other functions like int 
    //getDollarsOwed() and 
    //getInvoiceId()
    //Invoice();
    //Invoice(string invoiceId);
    void testgetDollarsOwed() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            invoice.addServiceCost(14);
            if (invoice.getDollarsOwed() != 24) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        } 

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-1);
            invoice.addServiceCost(34);
            invoice.addServiceCost(4);
            if (invoice.getDollarsOwed() !=38 ) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

    }

    void testgetInvoiceId() {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceId() != "ABCD") {
                std::cout << "Test 1 failed!" << std::endl;
            }
        } 

        {
            Invoice invoice("DEF");
            if (invoice.getInvoiceId() != "DEF") {
                std::cout << "Test 1 failed!" << std::endl;
            }
        } 
    }

    void testInvoice(){
        {
            Invoice invoice("ABCD");
            //test the constructor
            invoice.addServiceCost(34);
            invoice.addServiceCost(35);
            if ((invoice.getInvoiceId() != "ABCD") || (invoice.getDollarsOwed() != 67)){
                std::cout << "Test 1 failed!" << std::endl;
            }
        } 

        {
            Invoice invoice;
            if ((invoice.getInvoiceId() != "")|| (invoice.getDollarsOwed() != 0)) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        } 
    }


};
