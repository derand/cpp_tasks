#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha;
    cout << "Enter alpha:";
    cin >> alpha;

    float z1 = cos(alpha) + cos(2*alpha) + cos(6*alpha) + cos(7*alpha);
    float z2 = 4*cos(alpha/2.0) * cos(5.0/2.0*alpha)*cos(4*alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}