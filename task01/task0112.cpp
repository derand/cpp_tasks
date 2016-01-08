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
    float z1 = sin(4*alpha) / (1 + cos(4*alpha)) * cos(2*alpha) / (1 + cos(2*alpha));
    float z2 = 1 / tan(1.5*PI - alpha);

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}