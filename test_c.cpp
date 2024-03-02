#include <iostream>
using namespace std;

int main() {
    int n=5;
    int t1= n/2; //Ans is 2. So int rounds DOWN a double to the nearest integer? 
    //Remember an integer divided by an integer with no cast is an integer.
    int t2= n/2 -0.5; // Ans is 1
    double t3= (double) n/2; // Ans is 2.5
    double t4 = ((double)n)/2; // Ans is 2.5
    double t5= ((double)n)/2 -0.5; // Ans is 2
    
    
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    cout << t4 << endl;
    cout << t5 << endl;
    

    return 0;
}