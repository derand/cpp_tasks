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
    float z1 = 2*pow(sin(3*PI + 2*alpha), 2.0)*pow(cos(5*PI + 2*alpha), 2.0);
    float z2 = 1.0/4.0 - 1.0/4.0*sin(5.0/2.0*PI - 8*alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}