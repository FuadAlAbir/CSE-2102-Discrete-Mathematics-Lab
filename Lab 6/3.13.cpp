#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s[100];
    cin >> s;
    cout << "The given input string: " << s << endl;

    for(int i = 0; i < strlen(s); i++) {
        s[i] += 3;
        if(s[i] > 'z') {
            s[i] -= 26;
        }
    }
    cout << "Encrypted string: " << s << endl;
    for(int i = 0; i < strlen(s); i++) {
        s[i] -= 3;
        if(s[i] < 'a') {
            s[i] += 26;
        }
    }
    cout << "Decrypted string: " << s << endl;
}
