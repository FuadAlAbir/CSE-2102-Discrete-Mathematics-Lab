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
    long long a, j = 2;
    cin >> a;
    int i, k, counter = 0;

    int prime[100];

    /*for(i = 2; counter < 100; i++) {
        if(isPrime(i)) {
            cout << i << endl;
            counter++;
        }
    }*/
    for(i = 2; i < 550;) {
        if(isPrime(i) && a % i == 0) {
            counter++;
            a /= i;
            continue;
        }
        if(counter) {
            cout << "i = " << i << ", counter = " << counter << endl;
        }
        counter = 0;
        i++;
    }
}
