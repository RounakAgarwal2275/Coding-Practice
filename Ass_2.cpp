#include <bits/stdc++.h>
using namespace std;
const int N = 3;

void rotateMatrix(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0, k = N - 1; j < k; j++, k--) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][k];
            mat[i][k] = temp;
        }
    }
    for (int i = 0, k = N - 1; i < k; i++, k--) {
        for (int j = 0; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[k][j];
            mat[k][j] = temp;
        }
    }
}

void printMatrix(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout <<endl;
    }
}

int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(mat);

    rotateMatrix(mat);

    cout << "Matrix after rotation:\n";
    printMatrix(mat);

    return 0;
}