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
        
        bool status = !( (n > 2) || ( s == "11") || ( s == "00")  );

        cout << (status ? "YES" : "NO" ) << endl;
    }
}