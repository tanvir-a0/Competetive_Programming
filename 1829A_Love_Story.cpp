#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string input; cin >> input;
        string target = "codeforces";

        int result = 0;

        for(int i = 0 ; i < target.length() ; i = i + 1 )
        {
            if(input[i] != target[i])
            {
                result++;
            }
        }

        cout << result << endl;

    }
}