#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float m;
    cout << "Enter m:";
    cin >> m;

    float z1 = sqrt(pow(3*m + 2, 2.0) - 24*m) / (3 * sqrt(m) - 2.0/sqrt(m));
    float z2 = sqrt(m);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}