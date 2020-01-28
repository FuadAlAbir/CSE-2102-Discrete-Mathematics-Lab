#include <iostream>
#include <string.h>

using namespace std;

string bitAND (int n , string a, string b);

int main()
{
    int n;
    string str1, str2, str;
    cin >> n >> str1 >> str2;

    //bitAND(n, str1, str2);

    //cout << str1 << str2 << endl;


    return 0;
}

string bitAND (int n , string a, string b)
{
    int i;
    string c;
    for(i = 0; i < n; i++)
    {
        if(a[i] == 1 && b[i] == 1)
            c[i] = 1;
        else c[i] = 0;
    }
    cout << c;
}
