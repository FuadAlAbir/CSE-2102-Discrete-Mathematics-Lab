#include <iostream>

using namespace std;

int main() {
    int a, b, temp, gcd = 1;
    cin >> a >> b;
    if(b < a) {
        temp = a;
        a = b;
        b = temp;
    }
    if(0 == b % a) {
        cout << "GCD = " << a << endl;
    } else {
        for(int i = 2; 2 * i <= a; i++) {
            if(0 == a % i && 0 == b % i) {
                gcd = i;
            }
        }
        cout << "GCD = " << gcd;
    }
}
