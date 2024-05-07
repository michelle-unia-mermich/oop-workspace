
#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

int main() {
    UnitTest unitTest;
    unitTest.runTests();

    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    InvoiceTest invoiceTest;
    invoiceTest.runTests();

    //What is the BEST WAY to print out a single Test 2 is successful when all tests have succeeded?
    //printing out "test is successful" is a standard in unit testin

    return 0;
}