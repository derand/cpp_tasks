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
    float z1 = cos(alpha) + sin(alpha) + cos(3*alpha) + sin(3*alpha);
    float z2 = 2 * sqrt(2) * cos(alpha) * sin(PI/4.0 + 2*alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}