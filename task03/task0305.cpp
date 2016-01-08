#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int iter_max = 500;
    const double eps = 0.00000001;
    int i = 0;
    double x;

    cout << "Enter X: ";
    cin >> x;

    double val = 2*x;
    double y = val; 
    while (i < iter_max && fabs(val) >= eps) {
        val *= x * x * (2*i + 1) / (2*i + 3);
        y += val;
        i++;
    }

    if (fabs(val) < eps) {
        cout << "y=" << y << "\nIterations:" << i << '\n';
    } else {
        cout << "Reach maximum iteration count.\n";
    }

    return 0;
}
