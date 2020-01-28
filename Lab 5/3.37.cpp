#include <iostream>

using namespace std;

int main() {
    int m, n, i, j;

    cout << "Enter row: ";
    cin >> m;
    cout << "Enter column: ";
    cin >> n;

    int matrix_one[m][n], matrix_two[m][n], matrix_join[m][n], matrix_meet[m][n];

    // input matrix_one
    cout << "Enter matrix_one:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cin >> matrix_one[i][j];
        }
    }
    cout << "Enter matrix_two:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cin >> matrix_two[i][j];
        }
    }
    cout << endl;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(1 == matrix_one[i][j] || 1 == matrix_two[i][j]) {
                matrix_join[i][j] = 1;
            } else matrix_join[i][j] = 0;
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(1 == matrix_one[i][j] && 1 == matrix_two[i][j]) {
                matrix_meet[i][j] = 1;
            } else matrix_meet[i][j] = 0;
        }
    }

    cout << "Join of matrix_one and matrix_two:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cout << matrix_join[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Meet of matrix_one and matrix_two:\n";
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cout << matrix_meet[i][j] << " ";
        }
        cout << endl;
    }
}
