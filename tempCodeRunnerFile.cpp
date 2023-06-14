#include <bits/stdc++.h>    

using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        for( int i = 0 ; i < n ; i = i + 1 )
        {
            //cout << " i : " << i << endl;
            cin >> a[i];
        }

        int pos1 = 0, pos2 = 0;

        for (int i = 0 ; i < (n-1) ; i = i + 1 )
        {
            //cout << "i: " << i << endl;
            if((a[i] == 1) && (a[i+1] == 2))
            {
                pos1 = i; pos2 = i + 1; 
                break;
            }
            else if((a[i] == 2) && (a[i+1] == 1))
            {
                pos1 = i+1; pos2 = i; 
                break;
            }
        }
        if( (pos1 == 0) && (pos2 == 0))
        {
            for (int i = 0 ; i < n ; i = i + 1 )
            {
                if(a[i] == 1)
                {
                    pos1 = i;
                }
                if(a[i] == 2)
                {
                    pos2 == i;
                }
            }
        }

        //cout << "pos1: " << pos1 << " pos2: " << pos2 << endl;

        //code will be here if the code isn't optimized
        //we have to swap the 1 with another random value
        if(abs(pos1 - pos2) == 1)
        {
            if(min(pos1,pos2) == 0)
            {
                //then swap the greater one with the the next element;
                cout << a[max(pos1,pos2)] << " " <<  a[max(pos1,pos2)+1] << endl;

            }
            if(max(pos1,pos2) == (n-1))
            {
                cout << a[min(pos1,pos2)] << " " << a[min(pos1,pos2)-1] << endl;
            }
            else
            {
                cout << a[0] << " " << 2;
            }
        }
        else
        {
            cout << "1 1" << endl;
        }
    }
}