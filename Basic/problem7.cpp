/*Create a C++ program that defines a string containing the following character sequence:

I have learned something new again!

and displays the length of the string on screen.

Read two lines of text from the keyboard. Concatenate the strings using " * "
Output the new concatenated string on screen. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message("I have learned something new again!"),
        firstline,
        secondline;

    cout << message + "\tAnd the lenght is: " << message.length() << endl;

    cout << "Enter first line: ";
    cin >> firstline;

    cout << "\nEnter second line: ";
    cin >> secondline;

    cout << "\n" + firstline + " * " + secondline;

    return 0;
}
