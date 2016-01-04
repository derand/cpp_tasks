#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha;
    cout << "Enter alpha:";
    cin >> alpha;

    float z1 = 1 - 1.0/4.0*pow(sin(2*alpha), 2.0) + cos(2*alpha);
    float z2 = pow(cos(alpha), 2.0) + pow(cos(alpha), 4.0);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}