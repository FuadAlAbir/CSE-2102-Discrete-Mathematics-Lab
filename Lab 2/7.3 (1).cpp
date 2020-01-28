#include <iostream>

using namespace std;

int main()
{
    int l, u, sum = 0;
    cout << "Lower limit: ";
    cin >> l;
    cout << "Upper Limit: ";
    cin >> u;
    for(int i = l; i <= u; i++)
    {
        for(int j = l; j <= u; j++)
        {
            sum += i + j;
            //cout << i << " + " << j << " = " << sum << endl;
        }
    }

    cout << "\nSummation: " << sum << endl;
    return 0;
}
