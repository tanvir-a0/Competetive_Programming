#include<bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    //cout << "low: " << low << " high: " << high << " mid: " << mid << " a[mid]: " << array[mid] << endl;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
    int n,q;
    n = 1;
    q = 1;

    while(!((n == 0) && (q == 0)))
    {
        cin >> n; cin >> q;

        int a[n];
        for (int i = 0; i < n; i = i + 1 )
        {
            cin >> a[i];
        }

        sort(a,a+n);
        
        for (int i = 0; i < q; i++)
        {
            int search; cin >> search;

            cout << "CASE# " << i+1 << ":" << endl;

            int outPut = binarySearch(a,search,0,n-1);

            if(outPut == -1)
            {
                cout << search << " not found" << endl;
            }
            else
            {
                cout << search << " found at " << outPut+1 << endl;
            }
            

        }
    }

    return 0;
}
