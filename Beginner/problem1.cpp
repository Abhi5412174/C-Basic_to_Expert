/*
Write a C++ program that reads any given character code (a positive integer)
from the keyboard and displays the corresponding character and the character
code as a decimal, an octal, and a hexadecimal on screen.
*/

#include <iostream>
using namespace std;

int main()
{
    char a;
    int b;
    cout << "\nPlease enter a decimal character code: ";
    cin >> b;

    a = b;
    cout << "\nCharacter: " << a;

    cout << "\nDecimal: " << dec << b;
    cout << "\nOctal: " << oct << b;
    cout << "\nHexadecimal: " << hex << b;

    return 0;
}