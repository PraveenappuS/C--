#include <iostream>
#include <cmath>

using std:: cout;
using std:: cin;

double power(double exponent, int base)
{
    double result = 1;
    for(int i = 0; i<exponent;i++)
    {
        result = base*result;
    }  
    return result;
}

int main()
{
    int base;
    int exponent;
    cout<<"Enter the base value? ";
    cin>>base;
    cout<<"Enter the exponent value? ";
    cin>>exponent;
    double Mypower = power(exponent, base);
    cout<<Mypower;
}