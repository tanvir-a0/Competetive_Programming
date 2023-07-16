#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int input[n]; for( int i = 0 ; i < n ; i = i + 1 ){ cin >> input[i]; }
        int result = 0;
        int result_before = 0;

        for( int i = 0 ; i < n ; i = i + 1 )
        {
            if(input[i] == 0)
            {
                result++;
                //cout << "i: " << i << " result: " << result << " result_before: " << result_before << endl; 
                if(result > result_before)
                {
                    result_before = result;
                }
            }
            else{
                result = 0;
            }
        }
        cout << result_before << endl;
    }
}