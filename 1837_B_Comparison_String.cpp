#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        char s[n];
        for( int i = 0 ; i < n ; i = i + 1 )
        {
            cin >> s[i];
        }

        int x = 0, answer = 0;
        for( int i = 0 ; i < n ; i = i + 1 )
        {
            x=x+1;
            if((s[i]!=s[i+1]) || (i == n-1))
            {
                answer = max(x,answer);
                x = 0;
            }
        }
        cout << answer+1 << endl;
    }
}