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

        vector<int>a(n);
        vector<int>b(n);

        for( int i = 0 ; i < n  ; i = i + 1 )
        {
            cin >> a[i];
            cin >> b[i];
        }

        map<int,vector<long long>>lamps;

        for ( int i = 0 ; i < n ; i = i + 1 )
        {
            lamps[a[i]].push_back(b[i]);
        }

        for(int i = 1 ; i <= n ; i = i + 1 )
        {
            if(lamps[i].empty()) continue;
            sort( lamps[i].begin(), lamps[i].end(), greater<long long>() );
        }

        long long answer = 0;

        for(auto[v,lights]:lamps)
        {
            int turnedOn = 0;
            for( auto i:lights)
            {
                if (turnedOn == v )
                {
                    break;
                }
                answer=answer+i;
                turnedOn++;
            }
        }
        cout << answer << endl;
    }
}