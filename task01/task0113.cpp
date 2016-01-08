#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha, beta;
    cout << "Enter alpha:";
    cin >> alpha;
    cout << "Enter beta:";
    cin >> beta;

    float z1 = (sin(alpha) + cos(2*beta - alpha)) / (cos(alpha) - sin(2*beta - alpha));
    float z2 = (1 + 2*sin(beta)) / cos(2*beta);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}