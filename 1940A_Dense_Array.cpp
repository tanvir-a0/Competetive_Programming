#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n]; for(int i = 0 ; i < n ; i = i + 1 ){ cin >> a[i]; }

        int answer = 0;

        for(int i = 0 ; i < n-1 ; i = i + 1 )
        {
            if( ( (float)max(a[i],a[i+1]) / (float)min(a[i],a[i+1] ) ) <= 2.00 )
            {
                //This is okay
            }
            else
            {
                int small = min(a[i],a[i+1]);
                int large = max(a[i],a[i+1]);

                while(!(large <= (2*small)))
                {
                    small = small * 2;
                    answer++;
                }
            }
        }
        cout << answer << endl;


    }
}