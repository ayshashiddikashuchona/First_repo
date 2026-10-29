#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int A[r][c], B[r][c], C[r][c];

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    // Addition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Result of Matrix Addition:" << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
