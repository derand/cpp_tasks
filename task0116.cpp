#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float x;
    cout << "Enter x:";
    cin >> x;

    float z1 = (x*x + 2*x - 3 + (x+1)*sqrt(x*x - 9)) / (x*x - 2*x -3 + (x-1)*sqrt(x*x - 9));
    float z2 = sqrt((x + 3) / (x - 3));

    cout << "z1=" << z1 << "\nz2=" << z2 << "\ndiff=" << fabs(z1 - z2) << "\n";

    return 0;
}