#include <iostream>

using namespace std;

bool isPrime(long long p) {
    int flag = 1;
    for(long long i = 2; i * i <= p; i++) {
        if(p % i == 0) {
            flag = 0;
            break;
        }
    }
    if(1 == flag) {
        return true;
    } else return false;
}
int main() {
    int flag = 0;
    long long p, i;
    cout << "Enter an Even Integer: ";
    cin >> p;
    for(i = 2; 2 * i < p; i++) {
        if(isPrime(i) && isPrime(p - i)) {
            cout << i << " + " << p - i << "\n";
            flag = 1;
        }
    }
    if (0 == flag) cout << "Not Found" << endl;
}
