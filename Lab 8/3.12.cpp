#include <iostream>
using namespace std;

int main() {
    int n, m, a, c, xo, i, new_x;
    cout << "Enter N, m, a, c, xo (respectively): ";
    cin >> n >> m >> a >> c >> xo;
    for(i = 0; i < n; i++) {
        new_x = (a*xo + c) % m;
        cout << new_x << endl;
        xo = new_x;
    }
}