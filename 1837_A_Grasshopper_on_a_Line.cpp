#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,k;
        cin >> x >> k;

        if( (x < k) || (x % k != 0))
        {
            cout << 1 << "\n" << x << endl;
            continue;
        }

        cout << 2 << " " << endl;
        cout << (x-k-1) << " " << k+1 << endl;

    }
}