#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout<<boolalpha<<bool(not x < 10)<<endl;
    // Output: true

    x = 3;
    int y = 4;
    cout<<(x or y)<<endl;
    // Output: true because x is not zero

    x = 0.0;
    y = 4.4;
    cout<<(x and y)<<endl;
    // Output: false because x is zero
    return 0;
}

/*

Operator    Example    Meaning

!           !x         True if x is False
                       False if x is True
                       (Logically reverses the sense of x)

||          x || y     True if either x or y is True
                       False otherwise

&&          x && y      True if both x and y are True
                       False otherwise

*/