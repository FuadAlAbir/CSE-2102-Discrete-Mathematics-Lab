#include <iostream>
using namespace std;
int main()
{
    int l, u, a, d, sum = 0;
    cout << "Lower limit: ";
    cin >> l;
    cout << "Upper Limit: ";
    cin >> u;
    cout << "a: ";
    cin >> a;
    cout << "d: ";
    cin >> d;

    //cout << endl;
    for(int i = l; i <= u; i++)
    {
        sum += a + i*d;
      //  cout << a << " + " << i << "*" << d << " = " << sum << endl;
    }

    cout << "\nSummation: " << sum << endl;
    return 0;
}
