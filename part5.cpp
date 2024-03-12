#include <iostream>
using namespace std;

double* dynamicArray(int const N)
{
    /*
    dynamically allocates a double array of size N, initializes the array with values 
    (for instance, array index or a random number), and returns the pointer to the array.
    */
   double *p = new double[N]; //initialise N spots of dynamic memory for the array
   for(int i=0;i<N;i++)
   {
    *(p+i)=i;
   }
   return p;
}

int main()
{
    cout << "print out the function: " << endl;
    int N=10;
    double* p=dynamicArray(N);
    for(int i=0;i<N;i++)
   {
    cout << *(p+i) << endl;
   }
   return 0;
}
