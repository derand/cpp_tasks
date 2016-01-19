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
    double sum2 = 0;
    int min_idx, max_idx;

    min_idx = max_idx = -1;

    for (i=0; i<n; i++) {
        if (i%2 == 0) {
            sum2 += arr[i];
        }

        if (arr[i] < 0) {
            if (min_idx == -1) {
                min_idx = i;
            }
            max_idx = i;
        } 
    }

    cout << "idx " << min_idx << ".." << max_idx << '\n';

    for (i=min_idx; i<max_idx; i++) {
        sum += arr[i];
    }
    cout << "Sum(min-max) = " << sum << '\n';
    cout << "Sum(2i-1) = " << sum2 << '\n';

    int j;
    for (i=0; i<(n-1); i++) {
        if (abs(arr[i]) < 1) {
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
