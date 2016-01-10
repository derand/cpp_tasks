#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    const int n = 10;
    double arr[n] = { 1.0, 5.0, -3.0, 4.0, -2.5, 3.0, 2.5, 1.7, 8, 2.0};
    int i = 0;

    // Enter array from kayboard
    //for (; i<n; i++) {
    //    cout << "Enter X[" << i << "]: ";
    //    cin >> arr[i];
    //}

    for (i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    double sum = 0;
    double composition = 1;
    int min_idx, max_idx;
    double min, max;

    min = max = arr[0];
    min_idx = max_idx = 0;

    for (i=0; i<n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }

        if (min > fabs(arr[i])) { 
            min = fabs(arr[i]);
            min_idx = i;
        }
        if (max < fabs(arr[i])) { 
            max = fabs(arr[i]);
            max_idx = i;
        }
    }

    cout << "|Min| = " << min << " pos = " << min_idx << '\n';
    cout << "|Max| = " << max << " pos = " << max_idx << '\n';

    if (min_idx > max_idx) {
        int tmp = max_idx;
        max_idx = min_idx;
        min_idx = tmp;
    }
    for (i=min_idx; i<max_idx; i++) {
        composition *= arr[i];
    }
    cout << "Sum = " << sum << '\n';
    cout << "Composition = " << composition << '\n';

    // sort
    int j;
    for (i=0; i<(n-1); i++) {
        for (j=i+1; j<n; j++) {
            if (arr[i] < arr[j]) {
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
