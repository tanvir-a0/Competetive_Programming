#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        set<string>mySet;

        for(int i = 0 ; i < n-1 ; i = i + 1 )
        {
            mySet.insert(s.substr(i,2));
            //cout << s.substr(i,2) << endl;
        }

        cout << mySet.size() << endl;
    }
}