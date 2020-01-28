#include <iostream>

using namespace std;

int main() {

    int c;
    cin >> c;

    for(int i = 1; i < c - 2; i++) {
        for(int j = 1; j < c - 2; j++) {

            cout << i << " " << j << " " << c - i - j << endl;

        }

    }

}