// Calculating powers with
// the standard function pow()

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num = 2;
    double num2;
    float num3 = 2.5;
    float num4;
    num2 = pow(num, 2);
    cout << num << " to the power 2 is : " << num2 << endl;

    num4 = pow(num, num3);
    cout << num << " to the power " << num3 << " is : " << num4 << endl;

    cout << pow(2, 5) << endl;

    return 0;
}
