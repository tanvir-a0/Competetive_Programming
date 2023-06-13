#include <bits/stdc++.h>

using namespace std;

int calculate_pos( int n)
{
    int a = 1;
    int r = 2;
    return a*(pow(r,(long long)n) - 1)/(r-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        if( k > 29)
        {
            cout << n+1 << endl;
            continue;
        }

        long long t1 = pow(2,k);
        long long t2 = (n+1);
        cout << t1 << " " << t2 << endl;
        
        int answer = min(t1,t2);
        cout << answer << endl;

    }
}
