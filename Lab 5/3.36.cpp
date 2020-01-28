#include <iostream>
using namespace std;

int main() {
    int n, flag = 1;
    cout << "Enter the order of the matrix: ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter the matrix\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    if(1 == flag) {
        cout << "SYMMETRIC MATRIX." << endl;
    } else {
        cout << "Non-SYMMATRIC MATRIX." << endl;
    }
}
