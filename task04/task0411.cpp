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
    int min_pos = 0;
    int idx;

    idx = -1;

    for (i=0; i<n; i++) {
        if (abs(arr[min_pos]) > abs(arr[i])) {
            min_pos = i;
        }

        if (arr[i] < 0 && idx == -1) {
            idx = i;
        } 
    }

    cout << "idx " << idx << '\n';

    for (i=idx+1; i<n; i++) {
        sum += abs(arr[i]);
    }
    cout << "Sum = " << sum << '\n';
    cout << "Min modul = " << abs(arr[min_pos]) << " index = " << min_pos << '\n';

    // sort
    int j = n-1;
    for (i=0; i<j; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            arr[i] = arr[j];
            arr[j] = 0;
            j--;
            i--;
        }
    }
    for (i=0; i<n; i++) {
        cout << "X[" << i << "] = " << arr[i] << '\n';
    }

    return 0;
}
