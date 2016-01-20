#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int n = 10;
    double arr[n] = { 1.0, 0.0, -3.0, 4.0, -2.5, 0.0, 2.5, 1.7, 0, 2.0};
    int i = 0;
    double a = 1.1;
    double b = 2.0;

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
    int max_pos = 0;
    int idx;

    idx = -1;

    for (i=0; i<n; i++) {
        if (abs(arr[max_pos]) < abs(arr[i])) {
            max_pos = i;
        }

        if (arr[i] > 0 && idx == -1) {
            idx = i;
        } 
    }

    cout << "idx " << idx << '\n';

    for (i=idx+1; i<n; i++) {
        sum += abs(arr[i]);
    }
    cout << "Sum = " << sum << '\n';
    cout << "Max modul = " << abs(arr[max_pos]) << " index = " << max_pos << '\n';

    // sort
    int j;
    for (i=0; i<n-1; i++) {
        for (j=i; j<n; j++) {
            if (arr[j] >= a && arr[j] <= b) {
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
