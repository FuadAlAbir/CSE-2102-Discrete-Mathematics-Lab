#include <iostream>

using namespace std;

int main()
{
    int l, u;
    cin >> l >> u;

    int sum = 0;

    for(int i = l; i <= u; i++)
    {
        for(int j = l; j <= u; j++)
        {
            sum += (i + j);
            cout << i << " + " << j << " = " << sum << endl;
        }
    }
    cout << sum << endl;
}