#include <iostream>

using namespace std;

int main() {
    int a, b, temp, i;
    cin >> a >> b;

    if(b < a) {
        temp = a;
        a = b;
        b = temp;
    }
    for(i = b; i < b * b; i++) {
        if(!(i % a) && !(i % b)) {
            cout << "LCM = " << i << endl;
            break;
        }
    }

}
