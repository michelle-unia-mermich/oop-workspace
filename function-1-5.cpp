#include <iostream>

/*
Note: you can change the names of the *function parameters* if you wish, but NOT THE FUNCTION NAME. Gradescope will mark it wrong.
They are only used within their own functions.

What are the function parameters?
Eg.
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/
int count_evens(int number){ //int number is a function parameter here
    int count=0;
    if (number>=1){
        for(int i=1; i<=number; i++){
            if (i%2==0){
                count++;
            }
        }
    }
    else{
        count=0;
    }
    return count;
}