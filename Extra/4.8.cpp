#include <iostream>

using namespace std;

int euclidian_gdc(int a, int b) {
    
    int r;
    
    if(b == 0) return a;
    else {
        
        r = a % b;
        a = b;
        b = r;
        
        euclidian_gdc(a, b);
        
    }
    
}

int main()
{
    
    int a, b;
    cin >> a >> b;
    
    cout << euclidian_gdc(a, b);

    return 0;
}