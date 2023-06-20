#include <bits/stdc++.h>

using namespace std;


#include <bits/stdc++.h>

using namespace std;

int consecutive_combination(int n, int k)
{
    int answer = 0;
    for( ; k <= n ; k=k+1)
    {
        int temp = n-k+1;
        //cout << "n:" << n << "-k:" << k << "+1:" << temp;
        answer = answer + temp;
        //cout <<"  answer:" << answer << endl;
    }
    
    return answer;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,q;
        cin >> n >> k >> q;

        int a[n];
        for( int i = 0 ; i < n ; i = i + 1 )
        {
            cin >> a[i];
        }

        float answer = 0;
        float temp = 0;
        for( int i = 0 ; i < n ; i = i + 1 )
        {
            if(a[i] <= q)
            {
                temp++;
                //everything is okay
            }
            else
            {
                if(temp >= k)
                {
                    answer = answer + consecutive_combination(temp,k);
                    temp = 0;
                }
                else
                {
                    temp = 0;
                }
            }

            
            if( (i == n - 1) && (temp != 0) )
            {
                if(temp >= k)
                {
                    answer = answer + consecutive_combination(temp,k);
                    temp = 0;
                }
                else
                {
                    temp = 0;
                }
            }
            //cout << "temp: " << temp << endl;

        }
        cout << answer << endl;
    }
}