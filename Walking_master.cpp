#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > d)
        {
            cout << "-1" << "\n";
        }
        else if ((a + d - b) < c)
        {
            cout << "-1" << "\n";
        }
        else
        {
            cout << ((2 * (d - b)) + (a - c)) << "\n";
        }
    }
    return 0;
}