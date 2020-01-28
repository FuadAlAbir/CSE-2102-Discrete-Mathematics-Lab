#include <iostream>
#include <cmath>

using namespace std;

unsigned long long a[100];
unsigned long long counter = 0;

void binary (unsigned long long n) {
    unsigned long long b = 2;
    unsigned long long q = n, k = 0;
    while(q) {
        a[k] = q % b;
        q = floor(q/b);
        k++;
        counter++;
    }
    k--;
}

int main() {
    unsigned long long b, x, power, m, i, n;
    x = 1;
    cin >> b >> n >> m;
    binary(n);
    power = b % m;
    for(i = 0; i < counter; i++) {
        if(a[i] == 1) {
            x = (x * power) % m;
        }
        power = (power * power) % m;
    }
    cout << b << "^" << n << " mod " << m << " = " << x << endl;
}