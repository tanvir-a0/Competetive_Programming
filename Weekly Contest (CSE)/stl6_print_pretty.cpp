#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a,b,c;
        cin >> a >> b >> c;

        cout << hex
             << showbase
             << nouppercase;
        cout << (long long)a << endl;

        cout << right
             << dec
             << setw(15)
             << setfill('_')
             << showpos
             << fixed
             << setprecision(2);
        cout << b << endl;

        cout << scientific
             << setprecision(9)
             << noshowpos
             << uppercase;
        cout << c << endl;
             

    }
}