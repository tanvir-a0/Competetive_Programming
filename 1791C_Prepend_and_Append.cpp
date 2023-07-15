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

        int result = n;

        for(int i = 0 ; i < n/2 ; i = i + 1 )
        {
            //cout << s[i] << " " << s[n-1-i] << endl;

            if( ( (s[i] == '0') && (s[n-1-i] == '1')) || ( (s[i] == '1') && (s[n-1-i] == '0')))
            {
                //cout << "result: " << result << endl;
                result = result - 2;
            }
            else{
                break;
            }
        }
        
        cout << result << endl;
    }
}