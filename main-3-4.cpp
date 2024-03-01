#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main(){
    char grade_input = 'A';
    print_pass_fail(grade_input);
    return 0;
}