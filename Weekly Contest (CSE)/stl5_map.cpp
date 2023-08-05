#include <bits/stdc++.h>

using namespace std;


int main() {
    map<string, int>m;
    int q; cin >> q;
    while(q--)
    {
        int type; cin >> type;
        
        if(type == 1)
        {
            string x; cin >> x;
            int y; cin >> y;
            m[x] = m[x] + y;
        }
        else if(type == 2)
        {
            string x; cin >> x;
            m.erase(x);
        }
        else
        {
            string x; cin >> x;
            cout << m[x] << endl;
        }
    }
    return 0;
}
