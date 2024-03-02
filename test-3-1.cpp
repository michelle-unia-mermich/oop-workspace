// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool is_f(int array[], int n){
    bool ans = true;
    if(n>1){
        if(n%2 ==0){
            for(int i=0; i<n/2; i++){
                if((array[i]!=array[n-1-i]) || (array[i] > array[i+1])){
                    ans = false;
                }
            }
        }else{
            int middle=(int) (n/2 - 0.5);
            for(int i=0; i<middle; i++){
                if((array[i]!=array[n-1-i]) || (array[i] > array[i+1])){
                    ans = false;
                }
            }
        }
        
    }else{
        ans = false;
    }
    
    return ans;
}

int main() {
    // Write C++ code here
    std::cout << "Nam is testing Han's function....";
    int testcase_01_array[] = {1, 2, 0, 2, 1};
    int testcase_01_n = 5;
    
    cout << "Test Case 01 result: " << is_f(testcase_01_array, testcase_01_n) << endl;
    

    return 0;
}