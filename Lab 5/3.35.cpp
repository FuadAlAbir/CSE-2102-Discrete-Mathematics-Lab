#include <iostream>
using namespace std;



int main() {
    int m, n, i, j, l, q;
    cout << "Enter order of square matrix: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    int matrix[m][m], multiMatrix[m][m] = {0};
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            multiMatrix[i][j] = 0;
        }
    }

    cout << "Enter the Matrix:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // calculation goes here
    for(l = 0; l < n; l++) {
        for(i = 0; i < m; i++) {
            for(j = 0; j < m; j++) {
                for(q = 0; q < m; q++) {
                    multiMatrix[i][j] = multiMatrix[i][j] + matrix[i][q] * matrix[q][j];
                }
            }
        }
    }

    // output
    cout << "Matrix Product:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            cout << multiMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
