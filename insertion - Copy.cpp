
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n + 1];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, val;

    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> val;

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[pos - 1] = val;

    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
