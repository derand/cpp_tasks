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

    float PI = 3.14159265358979323846;
    float z1 = pow((cos(alpha) - cos(beta)), 2.0) - pow((sin(alpha) - sin(beta)), 2.0);
    float z2 = -4 * pow(sin((alpha-beta)/2.0), 2.0) * cos(alpha + beta);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}