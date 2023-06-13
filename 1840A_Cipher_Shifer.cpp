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
        cin >> s;
        char initial = s[0];
        
        for( int i = 1 ; i < n ; i = i + 1 )
        {
            //cout << t << "  " << s << "  " << s[n] << "  " << initial;

            if( initial == s[i])
            {
                cout << initial;
                if( i >= n )
                {
                    break;
                }
                initial = s[i+1];
                i++;
            }
        }
        cout << endl;
    }

}