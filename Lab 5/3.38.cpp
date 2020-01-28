#include <iostream>
using namespace std;

int main() {
    // matrix order variable;
    int m, k, n;

    // loop variable
    int i, j, q;

    cout << "Enter m, k, n: ";
    cin >> m >> k >> n;

    // matrix definition
    int matrix_one[m][k], matrix_two[k][n], bool_matrix_product[m][n];

    cout << "Enter matrix_one:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < k; j++) {
            cin >> matrix_one[i][j];
        }
    }
    cout << "Enter matrix_two:\n";
    for(i = 0; i < k; i++) {
        for(j = 0; j < n; j++) {
            cin >> matrix_two[i][j];
        }
    }

    // calculations goes here
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            bool_matrix_product[i][j] = 0;
            for(q = 0; q < k; q++) {
                bool_matrix_product[i][j] = bool_matrix_product[i][j] || (matrix_one[i][q] && matrix_two[q][j]);
            }
        }
    }

    cout << "\nBoolean product:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cout << bool_matrix_product[i][j] << " ";
        }
        cout << endl;
    }
}
