#include <iostream>

using namespace std;

int main(){
    int n, Max;
    cout << "Enter the value of n: ";
    cin >> n;
    int ax[n];
    for(int i = 0; i < n; i++){
        cin >> ax[i];
    }
    Max = ax[0];
    for(int i = 1; i < n; i++) {
        if (ax[i] > Max) {
            Max = ax[i];
        }
    }
    cout << "\nMaximum value: " << Max << endl;
}
