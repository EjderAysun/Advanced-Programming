#include <iostream>
using namespace std;

int main() {
    // Pointer initialized with NULL. \
    Then request memory for the variable.
    int *p = NULL;
    p = new int;
    *p = 6;
    cout<<*p<<endl;
    cout<<p<<endl;

    // Combine declaration of pointer \
    and their assignment.
    int *q = new int;
    
    return 0;

    // In following weeks, we will learn the details on new and delete operators and pointer!!
}