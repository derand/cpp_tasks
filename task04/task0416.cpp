#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int n = 10;
    double arr[n] = { 1.0, 0.0, -3.0, 4.0, -2.5, 0.0, 2.5, 1.7, 0, 2.0};
    int i = 0;
    double c = 2.3;

    // Enter array from keyboard
    //for (; i<n; i++) {
    //    cout << "Enter X[" << i << "]: ";
    //    cin >> arr[i];
    //}

    for (i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    int c_count = 0;
    int min_idx = 0;
    double sum = 0;
    int idx;

    idx = -1;

    for (i=0; i<n; i++) {
        if (arr[i] < 0) {
            c_count++;
        }
        if (abs(arr[min_idx]) > abs(arr[i])) {
            min_idx = i;
        }
    }

    for (i=min_idx+1; i<n; i++) {
        sum += abs(arr[i]);
    }
    cout << "Sum = " << sum << '\n';
    cout << "count = " << c_count<< '\n';

    for (i=0; i<n; i++) {
        if (arr[i] < 0) {
            arr[i] *= arr[i];
        }
    }

    // sort
    int j;
    for (i=0; i<n-1; i++) {
        for (j=i; j<n; j++) {
            if (arr[i] > arr[j]) {
                double tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (i=0; i<n; i++) {
        cout << "X[" << i << "] = " << arr[i] << '\n';
    }

    return 0;
}
