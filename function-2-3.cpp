#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length)
{
    bool answer=true;
    if (length>=1)
    {
        int middle_element=length/2;
    /*
    [1,2,3,4] -> scan indices 0, 1 -> i<2 
    [1,2,3,4,5] -> scan 0,1. No need to scan element index 2 -> i<2
    [1,2,3,4,5,6] -> scan indices 0,1,2 -> i<3
    */
        for(int i=0; i<middle_element;i++)
        {
            if(integers[i]!=integers[length-1-i])
            {
                answer=false;
                break; //only need one time being different they are not palindrome alr
            }
        }
    }
    else
    {
        answer=false; //question says if the length is 0 return false as its result, even though if the length is 0 the negative function must return -1
    }
   return answer;
}
//another method to do this function is to convert to string, then compare two strings, one string reads forward and one string reads backward
int sum_array_elements(int integers[], int length)
{
    int sum=0;
    if (length>=1)
    {
        for(int i=0; i<length; i++)
        {
            sum+=integers[i];
        }
    }
    else
    {
        sum=-1;
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length)
{
    if (is_palindrome(integers, length))
    {
        return sum_array_elements(integers, length);
    }
    else
    {
        return -2;
    }
}

