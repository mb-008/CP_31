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
        int diff = INT_MAX;
        bool sorted = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i)
            {
                diff = min((a[i] - a[i - 1]), diff);
                sorted &= a[i] >= a[i - 1];
            }
        }
        if (!sorted)
        {
            cout << 0 << endl;
            continue;
        }

        cout << diff / 2 + 1 << endl;
    }

    return 0;
}