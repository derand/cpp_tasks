#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha;
    cout << "Enter alpha:";
    cin >> alpha;

    float z1 = (sin(2*alpha) + sin(5*alpha) - sin(3*alpha)) / (cos(alpha) + 1 - 2*pow(sin(2*alpha), 2.0));
    float z2 = 2*sin(alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}