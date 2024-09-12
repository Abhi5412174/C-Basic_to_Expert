// The sizeof operator can be used to determine the number of bytes occupied
// in memory by a variable of a certain type. For example, sizeof(short) is
// equivalent to 2.
// Write a C++ program that displays the memory space required by each
// fundamental type on screen.

#include <iostream>;
using namespace std;

int main()
{

    char b;
    cout << sizeof(b) << endl;
    bool d;
    cout << sizeof(d) << endl;
    int a;
    cout << sizeof(a) << endl;
    float c;
    cout << sizeof(c) << endl;
    long e;
    cout << sizeof(e) << endl;
    short f;
    cout << sizeof(e) << endl;
    double g;
    cout << sizeof(g) << endl;
    long double h;
    cout << sizeof(h) << endl;
}