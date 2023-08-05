#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v;

    for(int i = 0 ; i < n ; i = i + 1 )
    {
        int x; cin >> x;
        v.push_back(x);

    }

    int e1,e2,e3; cin >> e1 >> e2 >> e3;

    v.erase(v.begin()+e1-1);

    v.erase(v.begin()+e2-1,v.begin()+e3-1);

    cout << v.size() << endl;

    for(int i = 0 ; i < v.size() ; i = i + 1 )
    {
        cout << v[i] << " ";
    }

    return 0;
}