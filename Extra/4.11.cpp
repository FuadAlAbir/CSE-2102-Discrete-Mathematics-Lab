#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin >> n;

    int a = 0, b = 1, count = 2;
    
    cout << a << " " << b << " ";
    while(count != n) {
        
        int temp = b;
        b = a + b;
        a = temp;
        
        count++;
        cout << b << " ";
        
    }
    
   return 0;
}