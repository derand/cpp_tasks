#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float x, y;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;

    float z1 = pow(cos(x), 4.0) + pow(sin(y), 2.0) + 1.0/4.0*pow(sin(2*x), 2.0) - 1;
    float z2 = sin(x+y) * sin(y-x);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}