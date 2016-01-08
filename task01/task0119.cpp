#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float a;
    cout << "Enter a:";
    cin >> a;

    float z1 = pow((1.0 + a + a*a)/(2.0*a + a*a) + 2.0 - (1.0 - a + a*a)/(2.0*a - a*a), -1.0) * (2.0 - 2.0*a*a);
    float z2 = (4.0 - a*a)/2.0;

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}