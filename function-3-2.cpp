#include <iostream>
using namespace std;

int *readNumbers(int length) 
{
    int *pointer= new int[length];
    cout<< "Insert the elements of the first array with length "<<length<<": ";
    for(int i=0;i<length;i++)
    {
        cin>> *(pointer+i);
        cout<< " ";
    }
    cout<<endl;
    return pointer;
}

int *reverseArray(int *numbers1,int length)
{
    int* new_pointer=new int [length];
    for(int i=0;i<length;i++)
    {
        *(new_pointer+i)= *(numbers1+length-1-i);
        //for example if i=0, length=10 then *(new_pointer+0)=*(numbers1+9)
    }
    return new_pointer;
}

bool equalsArray(int *pointer1,int *pointer2,int length)
{
    bool ans=true;
    if (length<1)
    {
        ans=false;
    }
    else
    {
        for(int i=0;i<length;i++)
        {
            if (*(pointer1+i)!=*(pointer2+i))
            {
                ans=false;
                break;
            }
        }
    }
    return ans; 
}