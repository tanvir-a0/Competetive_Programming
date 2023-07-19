#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> string_int;
    string s;
    while (n--)
    {
        cin >> s;
        if(string_int.count(s) == 0)
        {
            cout << "OK" << endl;
            string_int[s] = 1;
        }
        else
        {
            cout << s << string_int[s] << endl;
            string_int[s] = string_int[s] + 1;
        }
    }
    return 0;
}