#include <iostream>
#include <iomanip>
#include <cmath>
#include "lab.h"
using namespace std;
int main ()
{

    make_window()->show();
    Fl::run();
    return 0;
}
double f(double r, double a, double ppy, double n)
{
    return pmt(r,a,ppy,n);
}
double pmt(double r, double a, double ppy, double n)
{
    return ((r/100.0) * (a/ppy)) / (1-pow((r/100.0/ppy+1),-(ppy*n)));
}
