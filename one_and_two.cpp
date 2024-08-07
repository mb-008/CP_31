#include <bits/stdc++.h>
using namespace std;
int solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
        {
            total++;
        }
    }
    if (total == 0)
    {
        cout << 1 << "\n";
        return 0;
    }
    else
    {
        int twotillhere = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                twotillhere++;
            }
            if (twotillhere * 2 == total)
            {
                cout << i + 1 << "\n";
                return 0;
            }
        }
        cout << -1 << "\n";
    }

    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}