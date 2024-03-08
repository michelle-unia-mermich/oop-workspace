#include <iostream>
using namespace std;

 void count_digits(int array[4][4])
 {
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    for (int i=0; i<4 ; i++)
    {
        for (int j=0; j<4; j++)
        {
            for(int digit=0; digit<=9; digit++)
            {
                if(array[i][j]==digit)
                {
                    count[digit]++;
                    break;
                }
            }
        }
    }

    for(int digit2=0; digit2<=9; digit2++)
    {
        cout << digit2 <<":"<<count[digit2]<<";";
        if (digit2==9)
        {
            cout <<endl;
        }
    }
 }
