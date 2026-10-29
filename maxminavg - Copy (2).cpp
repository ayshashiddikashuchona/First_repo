#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxval = arr[0];
    int minval = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxval)
            maxval = arr[i];

        if (arr[i] < minval)
            minval = arr[i];
    }

    cout << "Maximum element: " << maxval << endl;
    cout << "Minimum element: " << minval << endl;

    return 0;
}
