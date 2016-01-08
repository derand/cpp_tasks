#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha;
    cout << "Enter alpha:";
    cin >> alpha;

    float z1 = (sin(2*alpha) + sin(5*alpha) - sin(3*alpha)) / (cos(alpha) + cos(5*alpha) - cos(3*alpha));
    float z2 = tan(3*alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}