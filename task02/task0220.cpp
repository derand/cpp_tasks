#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    float a, b, c, x_start, x_end, x_d;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    cout << "Enter x_start:";
    cin >> x_start;
    cout << "Enter x_end:";
    cin >> x_end;
    cout << "Enter d_x:";
    cin >> x_d;
    x_d = fabs(x_d);

    float f, x;
    if (x_start > x_end) {
        float tmp = x_start;
        x_start = x_end;
        x_end = tmp;
    }
    cout << "X\tF\n";
    x = x_start;
    while (x < x_end) {
        if (x < 0 && fabs(b) > 0.00001) {
            f = -1 * (2*x - c)/(c*x - a); 
        } else if (x > 0 && fabs(b) < 0.00001) {
            f = (x - a) / (x - c);
        } else {
            f = -x/c - c/(2*x);
        }
        cout << x << '\t' << f << '\n';
        x += x_d;
    }

    return 0;
}
