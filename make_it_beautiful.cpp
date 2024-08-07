#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int f = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int maxi = INT16_MIN, mini = INT16_MAX;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, a[i]);
            mini = min(mini, a[i]);
        }
        if (maxi == mini)
        {
            cout << "NO" << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == maxi)
                {
                    swap(a[i], a[0]);
                }
                if (a[i] == mini)
                {
                    swap(a[i], a[1]);
                }
            }
            cout << "YES" << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}