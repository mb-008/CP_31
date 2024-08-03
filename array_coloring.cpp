#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] % 2) != 0)
            {
                c++;
            }
        }
        // agar odd number ka count even hai toh yes same parity hogi
        if ((c % 2) == 0)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}