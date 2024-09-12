// Write a C++ program that two defines variables for floating-point numbers and
// initializes them with the values
// 123.456 and 76.543
// Then display the sum and the difference of these two numbers on screen.

#include <iostream>
using namespace std;

int main()
{
    double a = 123.456;
    double b = 76.543;
    double addition = a + b;
    double difference = a - b;

    cout << "\nSum of " << a << " and " << b << " is: " << addition;
    cout << "\nDifference of " << a << " and " << b << " is: " << difference;
}