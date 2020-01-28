#include <iostream>

using namespace std;

bool isPrime(long long p) {
    int flag = 1;
    for(int i = 2; i * i <= p; i++) {
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
    long long n;
    cout << "Enter the value of n: ";
    cin >> n;
    if(isPrime(n)) {
        cout << n << " is Prime." << endl;
        if(isPrime(n + 2)) {
            cout << n + 2 << " is Prime Too" << endl;
            cout << n << " and " << n + 2 << " are Twin prime." << endl;
        } else cout << n + 2 << " is not Prime.\nThey are not Twin Prime." << endl;
    } else {
         cout << n << " is not Prime" << endl;
         cout << "No need to check for n + 2 is prime or not." << endl;
    }

}
