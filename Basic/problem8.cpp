/*
Write a C++ program that reads an article number, a quantity, and a unit price
from the keyboard and outputs the data on screen as displayed on the opposite
page.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float number, quantity, unit_price;
    string money = "$";

    cout << "article number: ";
    cin >> number;
    cout << "\nquantity: ";
    cin >> quantity;
    cout << "\nunit price: ";
    cin >> unit_price;

    cout << "\narticle number    quantity    unit price";
    cout << "\n\t"
         << setw(5) << number
         << setw(9) << quantity
         << fixed << setprecision(2)
         << setw(13) << unit_price << money << endl;

    return 0;
}
