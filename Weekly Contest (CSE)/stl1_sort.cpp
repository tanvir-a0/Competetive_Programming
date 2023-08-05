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

    sort(v.begin(), v.end());

    for(int i = 0 ; i < v.size() ; i = i + 1 )
    {
        cout << v[i] << " ";
    }

    return 0;
}