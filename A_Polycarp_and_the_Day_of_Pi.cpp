#include <bits/stdc++.h>

using namespace std;

int check_pi(string input_string)
{
    string pi = "3141592653589793238462643383279502884197169399375105820974944";

    int match = 0;
    for(int i = 0 ; i < input_string.length() ; i = i + 1)
    {
        if(input_string[i] == pi[i])
        {
            match++;
        }
        else{
            break;
        }
    }
    return match;
}

int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        string input; cin >> input;
        cout << check_pi(input) << endl;;

    }
}