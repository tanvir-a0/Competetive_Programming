#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n]; 

        int mihai = 0, bianca = 0;
        for(int i = 0 ; i < n ; i = i + 1 )
        { 
            cin >> a[i] ;
            if(a[i] %2 == 0)
            {
                mihai = mihai + a[i];
            }
            else{
                bianca = bianca + a[i];
            }
        }
        if(mihai > bianca)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }
}