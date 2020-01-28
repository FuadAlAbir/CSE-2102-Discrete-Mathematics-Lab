#include <iostream>
#include <cmath>

using namespace std;

int hassh[10];

void check() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < i; j++) {
            if(hassh[i] == hassh[j]) {
                hassh[i]++;
            }
        }
    }
}

int main() {
    int id[10];
    int k;
    cin >> k;
    for(int i = 0; i < 10; i++) {
        cin >> id[i];
    }
    for(int i = 0; i < 10; i++) {
        hassh[i] = id[i] % k;
        // cout << hassh[i] << " ";
    }
    // cout << endl;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < i; j++) {
            if(hassh[i] == hassh[j]) {
                hassh[i]++;
            }
        }
    }
    check();
    check();
    check();
    cout << "Index position:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << id[i] << " -> " << hassh[i] << endl;
    }
}