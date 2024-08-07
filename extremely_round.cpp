#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int l = ((int)log10(a)) + 1;
        int ans = 0;
        if (l == 1)
        {
            ans = a;
            cout << ans << "\n";
        }
        else

        {

            int val = pow(10, (l - 1));
            int b = (int)(a / val);
            ans += b;
            ans += (9 * (l - 1));
            cout << ans << "\n";
        }
    }
    return 0;
}