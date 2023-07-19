#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n; cin >> m;

    int a[m];

    for( int i = 0 ; i < m ; i = i + 1 )
    {
        cin >> a[i] ; 
    }

    int current = 1;
    int answer = 0;

    for( int i = 0 ; i < m ; i = i + 1 )
    {
        if(current <= a[i])
        {
            answer = answer + a[i] - current;
            //cout << "adding: " << a[i] - current << endl;
            current = a[i];
        }
        else
        {
            answer = answer + n - abs(current - a[i]);
            //cout << "adding: " <<  n - abs(current - a[i]) << endl;
            current = a[i];
        }
    }
    cout << answer;
}