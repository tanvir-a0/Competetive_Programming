#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i = i + 1 )
    {
        int x; cin >> x;
        v.push_back(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int search; cin >> search;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), search);
        
        if (v[low - v.begin()] == search)
            cout << "Yes " << (low - v.begin() + 1) << endl;
        else
            cout << "No " << (low - v.begin() + 1) << endl;
    }

    return 0;
}
