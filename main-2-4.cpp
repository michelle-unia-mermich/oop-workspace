#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int );

int main()
{
    int integers[7]={1,2,3,4,5,6,7};
    int length=7;
    cout << sum_min_max(integers,length) << endl;
    return 0;
}