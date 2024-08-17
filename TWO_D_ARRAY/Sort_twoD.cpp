#include <iostream>
using namespace std;

void Sort(int A[][3], int row, int col) {
    // Sort rows
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = j + 1; k < col; k++) {
                if (A[i][j] > A[i][k]) {
                    int temp = A[i][j];
                    A[i][j] = A[i][k];
                    A[i][k] = temp;
                }
            }
        }
    }

    // Sort columns
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            for (int k = j + 1; k < row; k++) {
                if (A[j][i] > A[k][i]) {
                    int temp = A[j][i];
                    A[j][i] = A[k][i];
                    A[k][i] = temp;
                }
            }
        }
    }
}

int main() {
    int A[][3] = {{5, 2, 8}, {4, 1, 7}, {3, 6, 9}};
    int row = 3;
    int col = 3;

    Sort(A, row, col);

    // Display the sorted matrix
    cout << "Sorted array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
