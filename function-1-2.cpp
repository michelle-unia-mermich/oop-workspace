#include <iostream>
using namespace std;

int is_identity(int array[10][10])
{
    int result=1; //in the beginning, true
    for(int i=0;i<10;i++)
    {
        for(int j=0; j<10; j++)
        {
            if(i==j)
            {
                if (array[i][j]!=1)
                {
                    result=0; //false
                }
            }
            else
            {
                if (array[i][j]!=0)
                {
                    result=0; //false
                }
            }
        }
    }
    
    return result;

}