#include <iostream>
#include <string>
using namespace std;

int main() {

    // cin is used to get input from the user.
    // >> is the extraction operator which is used to get the input value from cin.
    // cout is used to output to the console.
    // << is the insertion operator which is used to insert the value to be printed into cout.

    int x;
    cout<<"Enter a number:";
    cin>>x;  // cin means "character input".
    cout<<x<<endl;

    string y;
    cout<<"Enter a string:";
    cin>>y;  // cin means "character input".
    cout<<y<<endl;
    
    return 0;
}