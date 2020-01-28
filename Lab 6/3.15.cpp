#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long p, i;
    cin >> p;
    int flag = 1;
    for(i = 2; i * i <= p; i++) {
        if(p % i == 0) {
            flag = 0;
            break;
        }
    }
    if(1 == flag) {
        cout << "P = " << p << " is Prime" << endl;

        long long n = pow(2, p) - 1;
        flag = 1;
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
        if(1 == flag) {
            cout << "N = " << n << " is Mersenne Prime" << endl;
        } else cout << "N = " << n << " is not Mersenne Prime, divisible by " << i << endl;
    }
    else cout << "P = " << p << " is not Prime, divisible by " << i
              << "\nAnd no need to check for Mersenne prime." << endl;
}
