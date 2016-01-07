#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int iter_max = 500;
    const double eps = 0.00000001;
    const double PI = 3.14159265358979323846;
    double x;

    cout << "Enter X: ";
    cin >> x;

    double val = x;
    double y = val; 
    int i = 0;
    while (i < iter_max && fabs(val) >= eps) {
        val *= x * x * (2*i + 1) / (2*i + 3);
        y += val;
        i++;
    }

    if (fabs(val) < eps) {
        cout << "y = " << y << "\nIterations:" << i << '\n';
    } else {
        cout << "Reach maximum iteration count.\n";
    }

    return 0;
}
