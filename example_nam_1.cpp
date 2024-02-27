#include <iostream>
using namespace std;

int factorial(int a)
{
        int i, fact;
        for (i=1,fact=1; i<=a; i=i+1)
        {	
                fact=fact*i;
        }

        return fact;
}

int main()
{
        int number_a;
        cout << "Please enter a number:\n";
        cin >> number_a;
        cout << "Its factorial is:\n";
        cout << factorial(number_a);
        cout << endl;
        return 0;
}