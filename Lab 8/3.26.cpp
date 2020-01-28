#include <iostream>

using namespace std;

int gcd (int a, int b) {
    int r;
    while(b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b, temp;
    cin >> a >> b;
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    int gcd_value = gcd(a, b);
    if (1 == gcd_value) {
        cout << "GCD: " << gcd_value << " = ";
        cout << a << " * " << 0 << " + " << b << " * " << 0 << endl;
        return 0;
    }
    for(int i = 0; i <= gcd_value; i++) {
        for(int j = 0; j <= gcd_value; j++) {
            if(a * i + b * j == gcd_value) {
                cout << "GCD: " << gcd_value << " = ";
                cout << a << " * " << i << " + " << b << " * " << j << endl;
            }
        }
    }
}