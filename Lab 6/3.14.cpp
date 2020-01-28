#include <iostream>

using namespace std;

int main() {
    long long p, i;
    cout << "Input the number to check if it is prime or not: ";
    cin >> p;
    int flag = 1;
    for(i = 2; i * i <= p; i++) {
        if(p % i == 0) {
            flag = 0;
            break;
        }
    }
    if(1 == flag) {
        cout << "Prime" << endl;
    } else cout << "Not Prime, divisible by " << i << endl;
}
