/* Create a program to calculate the square roots of the numbers
   4  12.25  0.0121
   Then read a number from the keyboard and
   output the square root of this number.
   To calculate the square root, use the function sqrt()
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 4,
           b = 12.25,
           c = 0.0121,
           d;

    cout << "Given numbers\t\tSq. roots" << endl;
    cout << a << "\t\t\t" << sqrt(a)
         << "\n"
         << b << "\t\t\t" << sqrt(b)
         << "\n"
         << c << "\t\t\t" << sqrt(c) << endl;

    cout << "\nEnter any number to find the sq. root: ";
    cin >> d;
    cout << "\nThe sq. root of " << d << " is " << sqrt(d) << endl;

    return 0;
}