#include <iostream>
using namespace std;

void changeValue(double*p)
{
    //accepts a pointer to a double and changes the value of the double it points at to 42.
    *p=42;
}

int main()
{
    double a=2;
    double *p=&a;
    changeValue(p);
    cout << a << endl;
    return 0;
}