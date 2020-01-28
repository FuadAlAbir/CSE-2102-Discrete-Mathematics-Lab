#include <iostream>

using namespace std;

int func(int n) {
    return n * n - n + 41;
}

int main() {
    int p;
    cout << "Enter the value of n (n^2 - n + 41): ";
    cin >> p;

    p = func(p);

    int flag = 1;
    for(int i = 2; i * i <= p; i++) {
        if(p % i == 0) {
            flag = 0;
            break;
        }
    }
    if(1 == flag) {
        cout << p << " is Prime" << endl;
    } else cout << p << " is Not Prime" << endl;
}
