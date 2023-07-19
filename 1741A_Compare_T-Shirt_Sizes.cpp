#include <bits/stdc++.h>

using namespace std;

char same(string a, string b)
{
    int ax, bx;
    ax = bx = 0;

    for( int i = 0 ; i < a.length() ; i = i + 1 )
    {
        if(a[i] == 'X')
        {
            ax++;
        }
    }

    for( int i = 0 ; i < b.length() ; i = i + 1 )
    {
        if(b[i] == 'X')
        {
            bx++;
        }
    }

    if(a[a.length()-1] == 'L')
    {
        if((ax > bx))
        {
            return '>';
        }
        else
        {
            return '<';
        }
    }

    if(a[a.length()-1] == 'S')
    {
        if((ax > bx))
        {
            return '<';
        }
        else
        {
            return '>';
        }
    }

    return '<';

}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a; cin >> b;

        if(a == b)
        {
            cout << '=' << endl;
            continue;
        }

        if(a[a.length()-1] == b[b.length()-1])
        {
            cout << same(a,b) << endl;
            continue;
        }

        if(   (char)min(a[a.length()-1] , b[b.length()-1])   ==  a[a.length()-1] )
        {
            cout << '>'  << endl;
        }
        else
        {
            cout << '<' << endl;
        }

    }
}