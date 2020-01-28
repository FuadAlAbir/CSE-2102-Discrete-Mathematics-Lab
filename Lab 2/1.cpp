#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 4, 6, 8, 10};

    cout << "\nA: \t";
    for(int i = 0; i < (sizeof(a)/4); i++)
        cout << a[i] << " ";
        cout << endl << "B: \t";

        for(int i = 0; i < (sizeof(b)/4); i++)
        cout << b[i] << " ";
        cout << endl;

    cout << "\nA Union B: \t\t{";

    for(int i = 0; i < (sizeof(a)/4); i++)
    {
        cout << a[i] << ", " << ends;
    }

    for(int i = 0; i < (sizeof(a)/4); i++)
    {
        int flag = 0;
        for(int j = 0; j < (sizeof(b)/4); j++)
        {
            if(b[i] == a[j])
            {
                flag = 1;
                continue;
            }
        }
        if(flag == 0)
        {
            if(i == (sizeof(b)/4) - 1)
                cout << b[i] << "}" << ends;
            else
                cout << b[i] << ", " << ends;
        }
    }
    cout << "\nA Intersection B: \t{";

    for(int i = 0; i < (sizeof(a)/4); i++)
    {
        int flag = 0;
        for(int j = 0; j < (sizeof(b)/4); j++)
        {
            if(b[i] == a[j])
            {
                flag = 1;
                cout << b[i] << ", " << ends;
            }
        }
    }

    cout << "}\nA Difference B: \t{";

    for(int i = 0; i < (sizeof(a)/4); i++)
    {
        int flag = 0;
        for(int j = 0; j < (sizeof(b)/4); j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                continue;
            }
        }
        if(flag == 0)
        {
            cout << a[i] << ", " << ends;
        }
    }

    cout << "}\nA ExOR B: \t\t{";

    for(int i = 0; i < (sizeof(a)/4); i++)
    {
        int flag = 0;
        for(int j = 0; j < (sizeof(b)/4); j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                continue;
            }
        }
        if(flag == 0)
        {
            cout << a[i] << ", " << ends;
        }
    }
    for(int i = 0; i < (sizeof(b)/4); i++)
    {
        int flag = 0;
        for(int j = 0; j < (sizeof(a)/4); j++)
        {
            if(b[i] == a[j])
            {
                flag = 1;
                continue;
            }
        }
        if(flag == 0)
        {
            cout << b[i] << ", " << ends;
        }
    }
    cout << "}" << endl;
}
