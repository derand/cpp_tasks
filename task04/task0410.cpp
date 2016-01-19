#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int n = 10;
    double arr[n] = { 1.0, 0.0, -3.0, 4.0, -2.5, 0.0, 2.5, 1.7, 0, 2.0};
    int i = 0;

    // Enter array from keyboard
    //for (; i<n; i++) {
    //    cout << "Enter X[" << i << "]: ";
    //    cin >> arr[i];
    //}

    for (i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    double sum = 0;
    double min = arr[0];
    int idx;

    idx = -1;

    for (i=0; i<n; i++) {
        if (abs(min) > abs(arr[i])) {
            min = arr[i];
        }

        if (arr[i] == 0 && idx == -1) {
            idx = i;
        } 
    }

    cout << "idx " << idx << '\n';

    for (i=idx+1; i<n; i++) {
        sum += arr[i];
    }
    cout << "Sum = " << sum << '\n';
    cout << "Min modul = " << min << '\n';

    // sort
    int j;
    for (i=0; i<n/2; i++) {
        if (i%2 == 0) {
            double tmp = arr[i];
            arr[i] = arr[i+n/2];
            arr[i+n/2] = tmp;
        }
    }
    for (i=0; i<n; i++) {
        cout << "X[" << i << "] = " << arr[i] << '\n';
    }

    return 0;
}
