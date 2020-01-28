#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, u, a, r, sum = 0;
    cout << "Lower limit: ";
    cin >> l;
    cout << "Upper Limit: ";
    cin >> u;
    cout << "a: ";
    cin >> a;
    cout << "d: ";
    cin >> r;

    //cout << endl;
    for(int i = l; i <= u; i++)
    {
        sum += a*pow(r,i);
        //cout << a << " * " << r << "^" << i << " = " << sum << endl;
    }

    cout << "\nSummation: " << sum << endl;
    return 0;
}
