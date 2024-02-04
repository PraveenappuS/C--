#include <iostream>
#include <cmath>

using std:: cout;
using std:: cin;

int main()
{
    int base;
    int exponent;
    cout<<"What is the base value? ";
    cin>>base;
    cout<<"What is the exxponent value? ";
    cin>>exponent;
    double power = pow(base, exponent);
    cout<<power;
}