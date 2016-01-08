#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha;
    cout << "Enter alpha:";
    cin >> alpha;

    float PI = 3.14159265358979323846;
    float z1 = pow(cos(3.0/8.0*PI -alpha/4.0), 2.0) - pow(cos(11.0/8.0*PI + alpha/4.0), 2.0);
    float z2 = sqrt(2)/2.0 * sin(alpha/2.0);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}