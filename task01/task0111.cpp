#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float alpha;
    cout << "Enter alpha:";
    cin >> alpha;

    float z1 = (1 - 2*pow(sin(alpha), 2.0)) / (1 + sin(2*alpha));
    float z2 = (1 - tan(alpha)) / (1 + tan(alpha));

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}