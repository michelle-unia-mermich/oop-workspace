#include <iostream>
using namespace std;

/*
2:<num_twos>;5:<num_fives>;9:<num_nines>;

If the array contained three 2s, one 5 and eleven 9s, the output would be:

        2:3;5:1;9:11;
*/

void two_five_nine(int array[], int n){
    int count_two=0;
    int count_five=0;
    int count_nine=0;
    if (n>=1){
        for ( int i =0; i<n ; i++){
            switch(array[i]){
                case 2:
                    count_two++;
                    break;
                case 5:
                    count_five++;
                    break;
                case 9:
                    count_nine++;
                    break;
            }

        }
    cout << "2:" << count_two << ";5:" << count_five << ";9:" << count_nine << ";"<< endl;

    }
    else{
        cout << "Error" << endl;
    }
}