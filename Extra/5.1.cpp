#include <iostream>

using namespace std;

int fact(int n) {
    
    if(n <= 1) return 1;
    else return n*fact(n - 1);
    
}

int main()
{
    
    int n, r;
    cin >> n >> r;
    
    cout << "Number of permutations: " << fact(n) / fact(n - r) << endl;
    cout << "Number of combinations: " << fact(n) / fact(n - r) / fact(r) << endl;

   return 0;
}