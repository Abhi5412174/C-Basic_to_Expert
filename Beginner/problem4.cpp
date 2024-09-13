// Operators for Fundamental Types

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 1,
        b = 2,
        c = 3;
    string message = "Hello";
    bool isGreater = a > message.length();
    cout << isGreater << endl;
}