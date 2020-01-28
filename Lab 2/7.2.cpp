#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, u, a, r;
    cout << "Input l, u, a and d respectly: ";
    cin >> l >> u >> a >> r;
    int sum = 0;

    for(int j = l; j <= u; j++)
    {
        sum += (a*pow(r, j));
        cout << a << "*" << r << "^" << j << " = " << sum << endl;
    }
    cout << sum;

    return 0;
}