#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            cout << n + 1 - x << " ";
        }
        cout << "\n";
    }
    return 0;
}