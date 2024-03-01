#include <iostream>
using namespace std;

void print_pass_fail(char grade){
    switch(grade){
        case 'A':
            cout << "Pass" << endl;
            break;
        case 'B':
            cout << "Pass" << endl;
        case 'C':
            cout << "Pass" << endl;
        case 'D':
            cout << "Fail" << endl;
        case 'E':
            cout << "Fail"<< endl;
        default:
            cout << "Nothing" << endl;


    }
}