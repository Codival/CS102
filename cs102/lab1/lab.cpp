#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double r);
double pmt(double r,double p,double ppy,double n);
int main ()
{
    cout << "Lab 1" << endl;
    cout<< fixed << setprecision(2);
    cout << "Enter interest rate (e.g. 9 for 9%) ";
    double r;    cin >> r;
    cout << "Your montly payment is: $"<< f(r) << endl;
    return 0;
}
double f(double r)
{
    return pmt(r,1000.0,12.0,5.0);
}
double pmt(double r, double p, double ppy, double n)
{
    return ((r/100.0) * (p/ppy)) / (1-pow((r/100.0/ppy+1),-(ppy*n)));
}
