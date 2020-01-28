#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int a[100];
    int q = n, k = 0;
    while(q) {
        a[k] = q % b;
        q = floor(q/b);
        k++;
    }
    k--;
    for(; k >= 0; k--) {
        if(a[k] > 9) cout << (char) (a[k] + 97);
        else cout << a[k];
    }
    //cout << (int) '0';
}
