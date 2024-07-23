#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

void Merge_array(int A[], int B[], int n, int m) {
    int cl = n + m; // total size of array C
    int C[cl]; // array C to hold merged elements
    // Copy elements of A to C
    for (int i = 0; i < n; i++) {
        C[i] = A[i];
    }
    // Copy elements of B to C
    for (int i = 0; i < cl; i++) {
        C[n+i] = B[i];
    }
    // Sort array C
    sort(C, C+cl);
    cout << "Merged and sorted array C:";
    for (int i = 0; i < cl; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {6, 4, 3,33,9,87};
    int B[] = {23, 67, 89, 12,11,10};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    Merge_array(A, B, n, m);
    return 0;
}
