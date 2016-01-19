#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int n = 10;
    double arr[n] = { 1.0, 0.0, -3.0, 4.0, -2.5, 0.0, 2.5, 1.7, 0, 2.0};
    double a = 1.0;
    double b = 2.0;
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
    double max = arr[0];
    int max_idx;

    max_idx = -1;

    for (i=0; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] > 0) {
            max_idx = i;
        } 
    }

    cout << "max idx " << max_idx << '\n';

    for (i=0; i<max_idx; i++) {
        sum += arr[i];
    }
    cout << "Sum = " << sum << '\n';
    cout << "Max = " << max << '\n';

    int j;
    for (i=0; i<(n-1); i++) {
        if (abs(arr[i]) > a && abs(arr[i]) < b) {
            for (j=i+1; j<n; j++) {
                arr[j-1] = arr[j];
            }
            arr[n-1] = 0;
        }
    }

    for (i=0; i<n; i++) {
        cout << "X[" << i << "] = " << arr[i] << '\n';
    }

    return 0;
}
