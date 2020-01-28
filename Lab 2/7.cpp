#include <iostream>

using namespace std;

int main()
{
    int l, u, a, d;
    cout << "Input l, u, a and d respectly: ";
    cin >> l >> u >> a >> d;
    int sum = 0;

    for(int i = l; i <= u; i++)
    {
        sum += (a + i*d);
        cout << a << " + " << i << "*" << d << " = " << sum << endl;
    }
    cout << sum;

    return 0;
}