#include <iostream>

using namespace std;

int fact(int n) {
    
    if(n <= 1) return 1;
    else return n*fact(n - 1);
    
}

int power(int n, int r) {
    
    if(r == 0) return 1;
    else if(r == 1) return n;
    else return n*power(n, --r);
    
}

int main()
{
    
    int n, r;
    cin >> n >> r;
    
    cout << "Number of permutations (with repetitions): "
         << power(n, r) << endl;
    cout << "Number of combinations (with repetitions): "
         << fact(n + r - 1) / fact(n - 1) / fact(r) << endl;

   return 0;
}