#include <iostream>
using namespace std;

int main() {
    int m, k, n, i, j, q;
    cout << "Enter m, k, n: ";
    cin >> m >> k >> n;
    int matrix_one[m][k], matrix_two[k][n], multiMatrix[m][n];

    cout << "Matrix_One:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < k; j++) {
            cin >> matrix_one[i][j];
        }
    }
    cout << "Matrix_Two:\n";
    for(i = 0; i < k; i++) {
        for(j = 0; j < n; j++) {
            cin >> matrix_two[i][j];
        }
    }

    // calculation goes here
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            multiMatrix[i][j] = 0;
            for(q = 0; q < k; q++) {
                multiMatrix[i][j] = multiMatrix[i][j] + matrix_one[i][q] * matrix_two[q][j];
            }
        }
    }

    // output
    cout << "Matrix Product:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cout << multiMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
