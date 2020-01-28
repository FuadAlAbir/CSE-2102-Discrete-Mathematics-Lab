#include <iostream>

using namespace std;

int fibonacci(int n, int a, int b, int count) {
    
    if(n == 1) return 0;
    else if(count >= n) return b;
    else {
        
        int temp = b;
        b = a + b;
        a = temp;

        cout << a << " ";
        
        return fibonacci(n, a, b, ++count);
        
    }

    
}

int main()
{
    
    int n;
    cin >> n;
    cout << "0 ";
    cout << fibonacci(n, 0, 1, 2);
    
    return 0;
}