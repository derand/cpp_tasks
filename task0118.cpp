#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float a;
    cout << "Enter a:";
    cin >> a;

    float z1 = ((a+2)/sqrt(2*a) - a/(sqrt(2*a)+2) + 2.0/(a-sqrt(2*a))) * (sqrt(a) - sqrt(2.0)) / (a+2);
    float z2 = 1.0 / (sqrt(a) + sqrt(2.0));

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}