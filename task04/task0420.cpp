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

    double composition = 1;
    int min_idx = 0;
    double sum = 0;

    for (i=0; i<n; i++) {
        if (arr[i] > 0) {
            composition *= arr[i];
        }
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    for (i=0; i<min_idx-1; i++) {
        sum += arr[i];
    }
    cout << "Composition = " << composition << '\n';
    cout << "Sum = " << sum << '\n';

    // sort
    int j;
    for (i=0; i<n/2-1; i++) {
        for (j=i; j<n/2; j++) {
            if (arr[i*2] > arr[j*2]) {
                double tmp = arr[i*2];
                arr[i*2] = arr[j*2];
                arr[j*2] = tmp;
            }
            if (j*2 < n && arr[i*2+1] > arr[j*2+1]) {
                double tmp = arr[i*2+1];
                arr[i*2+1] = arr[j*2+1];
                arr[j*2+1] = tmp;
            }
        }
    }    for (i=0; i<n; i++) {
        cout << "X[" << i << "] = " << arr[i] << '\n';
    }

    return 0;
}
