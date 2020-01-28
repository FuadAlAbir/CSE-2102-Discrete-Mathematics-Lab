#include <iostream>

using namespace std;

unsigned long long power(unsigned long long a, unsigned long long n) {
    
    if(n == 0) return 1;
    else if(n == 1) return a;
    else if(n > 1) return a*power(a, n - 1);

}

int main()
{
    
    unsigned long long a, n;
    cin >> a >> n;
    unsigned long long result = power(a, n);
    cout << a << " ^ " << n << " = " << result;
    
   return 0;
}