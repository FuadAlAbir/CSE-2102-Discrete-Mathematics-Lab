#include <iostream>
#include <string>

using namespace std;

AND(char *str1, char *str2, int size)
{
    cout << "Bitwise AND of two bit string " << str1 << " and " << str2 << ": " ;
    for(int i = 0; i < size; i++)
    {
        if(str1[i] == '1' && str2[i] == '1')
        {
            cout << "1";
        }
        else cout << "0";
    }
    cout << "\n\n";
}

OR(char *str1, char *str2, int size)
{
    cout << "Bitwise OR of two bit string " << str1 << " and " << str2 << ": " ;
    for(int i = 0; i < size; i++)
    {
        if(str1[i] == '0' && str2[i] == '0')
        {
            cout << "0";
        }
        else cout << "1";
    }
    cout << "\n\n";
}

XOR(char *str1, char *str2, int size)
{
    cout << "Bitwise XOR of two bit string " << str1 << " and " << str2 << ": " ;
    for(int i = 0; i < size; i++)
    {
        if(str1[i] == str2[i])
        {
            cout << "0";
        }
        else cout << "1";
    }
    cout << "\n\n";
}

int main()
{
    int n;
    cout << "Enter the string size: ";
    cin >> n;
    char str1[n], str2[n];
    cout << "Enter the two bit strings of size " << n << "\nBit String 1: ";
    cin >> str1;
    cout << "Bit String 2: ";
    cin >> str2;
    cout << "\n";

    while(1)
    {
        cout << "Enter your choice:\n\t1. Bitwise AND\n\t2. Bitwise OR\n\t3. Bitwise XOR\n\t4. Exit\n\n";
        int ch;
        cin >> ch;
        switch(ch)
        {
            case 1: AND(str1, str2, n); break;
            case 2: OR(str1, str2, n); break;
            case 3: XOR(str1, str2, n); break;
            default: return 0;
        }
    }
    return 0;
}