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
    float z1 = sin(PI/2.0 + 3*alpha) / (1 - sin(3-PI));
    float z2 = 1 / tan(5.0/4.0*PI + 3.0/2.0*alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}