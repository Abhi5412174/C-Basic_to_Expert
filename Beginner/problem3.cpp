// increament & decreament and
// Demonstration of compound assignments

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10,
//         b = 20,
//         c = a++,
//         d = b--;

//     cout << a << endl; // 11
//     cout << b << endl; // 19
//     cout << c << endl; // 10
//     cout << d << endl; // 20
//
//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x, y;
    cout << "\n Please enter a starting value: ";
    cin >> x;
    cout << "\n Please enter the increment value: ";
    cin >> y;
    x += y;
    cout << "\n And now multiplication! ";
    cout << "\n Please enter a factor: ";
    cin >> y;
    x *= y;
    cout << "\n Finally division.";
    cout << "\n Please supply a divisor: ";
    cin >> y;
    x /= y;
    cout << "\n And this is "
         << "your current lucky number: "
         // without digits after
         // the decimal point:
         << fixed << setprecision(0)
         << x << endl;
    return 0;
}