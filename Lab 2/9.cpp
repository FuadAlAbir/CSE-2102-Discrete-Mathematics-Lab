#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    /// (a) gregory leibniz series
    int l;
    cout << "Enter n for Gregory Leibniz Series: ";
    cin >> l;

    double pi;

    for(int i = 0; i < l; i++)
    {
        pi += (4*pow(-1, i))/(2*i+1);
    }
    cout << fixed << setprecision(10) << "\nFrom Gregory Leibniz Series: "  << pi << endl;

    /// (b) Machin's formula
    pi = 16 * atan(1/5.0) - 4*atan(1/239.0);
    cout << fixed << setprecision(10) << "\nFrom Machin's Formula: "  << pi << "\n\n";


    /// (c) Archimedes Formula
    long n = 6;
    double s = 1.0, a, b, s1, n1;
    while(n < 786423)
    {
        pi = (n*s)/2.0;
        a = sqrt(1 - s*s/4);
        b = 1 - a;
        s1 = sqrt((s * s)/4 + b * b);
        s = s1;
        n1 = 2*n;
        n *= 2;

        cout << fixed << setprecision(10) << s << " \t" << n << " \t" << pi << " \t" << a << " \t" << b << " \t" << s1 << " \t" << n1 << endl;
    }

    cout << fixed << setprecision(10) << "\nFrom Archimedes's Formula: "  << pi << endl;
}
