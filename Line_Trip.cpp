#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int last = 0;
        int ans = INT16_MIN;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, a[i] - last);
            last = a[i];
        }
        ans = max(ans, 2 * (x - last));
        cout << ans << endl;
    }
    return 0;
}
