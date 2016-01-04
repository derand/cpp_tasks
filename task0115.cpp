#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float b;
    cout << "Enter b:";
    cin >> b;

    float z1 = sqrt(2*b + 2*sqrt(b*b-4)) / (sqrt(b*b-4) + b + 2);
    float z2 = 1.0 / (sqrt(b + 2));

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}