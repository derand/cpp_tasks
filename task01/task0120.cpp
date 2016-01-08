#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float m, n;
    cout << "Enter m:";
    cin >> m;
    cout << "Enter n:";
    cin >> n;

    float z1 = ((m-1) * sqrt(m) - (n-1)*sqrt(n)) / (sqrt(pow(m, 3.0)*n) + m*n + m*m - m);
    float z2 = (sqrt(m) - sqrt(n)) / m;

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}