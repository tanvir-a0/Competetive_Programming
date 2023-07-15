#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        string codeforces = "codeforces";
       
       bool found  = false;

       for(char ch : codeforces){
        if(ch == c)
        {
            found = true;
            break;
        }
       }

       if(found)
       {
        cout << "YES" << endl;
       }
       else{
        cout << "NO" << endl;
       }
    }

    return 0;
}