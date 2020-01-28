#include <iostream>

using namespace std;

int main () {
    int coin[4] = {25, 10, 5, 1};
    int coin_count[4] = {0};
    int n;
    cout << "Enter Cents to change: ";
    cin >> n;

    for(int i = 0; i < 4; i++) {
        while (n >= coin[i]) {
            coin_count[i]++;
            n -= coin[i];
        }
    }
    cout << endl;
    cout    << coin_count[0] << " quarter\n"
            << coin_count[1] << " dime\n"
            << coin_count[2] << " nickel\n"
            << coin_count[3] << " penny\n";
}
