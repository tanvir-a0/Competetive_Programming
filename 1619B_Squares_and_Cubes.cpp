#include <bits/stdc++.h>

using namespace std;

int start_the_programm(int x);
void test(void);
void printline(void);

int main()
{
    return start_the_programm(1);
}

int start_the_programm(int x)
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        set<long long>Set;

        for(long long i = 1 ; i*i <= n ; i = i + 1 )
        {
            Set.insert(i*i);
        }
        for(long long i = 1 ; i*i*i <= n ; i = i + 1 )
        {
            Set.insert(i*i*i);
        }
        cout << Set.size() << endl;
    }
    return 0;
}

void test(void)
{
    for(long long i = 1 ; i <= 1000 ; i = i + 1 )
    {
        cout << "i: " << i << "\t\t" << i*i << "\t\t" << i*i*i << endl;
        printline();
        cout<< endl; 
    }
}

void printline(void)
{
    for(int i = 0 ; i <= 20 ; i = i + 1 )
    {
        cout << "-";
    }
}