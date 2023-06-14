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

        int a[n+1];
        for( int i = 1 ; i < n+1 ; i = i + 1 )
        {
            //cout << " i : " << i << endl;
            cin >> a[i];
        }

        int pos[n+1];
        for( int i = 1 ; i < n+1 ; i = i + 1 )
        {
            pos[a[i]] = i;
        }

        int ans1,ans2;

        if( ( min(pos[1],pos[2]) < pos[n] ) && (  pos[n] < max(pos[1],pos[2]))  )
        {
            ans1 = pos[1];
            ans2 = pos[2];
        }
        else if( (pos[1] < pos[2]) && (pos[2] < pos[n]) )
        {
            ans1 = pos[2];
            ans2 = pos[n];
        }
        else if ( (pos[2] < pos[1]) && (pos[1] < pos[n]) )
        {
            ans1 = pos[1];
            ans2 = pos[n];
        }
        else if ( (pos[n] < pos[1]) && (pos[1] < pos[2]) )
        {
            ans1 = pos[n];
            ans2 = pos[1];
        }
        else if ( (pos[n] < pos[2]) && (pos[2] < pos[1]))
        {
            ans1 = pos[n];
            ans2 = pos[2];
        }

        cout << ans1 << " " << ans2 << endl;


        
    }
}