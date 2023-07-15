#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int x,y;
        x = y = 0;

        string result = "NO";

        for(char ch: s)
        {
            x = x + (ch == 'R') - (ch == 'L');
            y = y + (ch == 'U') - (ch == 'D');
            
            if((x == 1) && (y == 1))
            {
                result = "YES";
            }
        }

        cout << result << endl;
    }
}