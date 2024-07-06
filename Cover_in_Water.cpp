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
        string s;
        cin >> s;
        int e = 0;
        bool f = true;

        for (int i = 0; i < n; ++i)
        {
            // jitne . hai utne operations chahiye agar ... nahi mile toh
            if (s[i] == '.')
            {
                e++;
            }
            // Limiting case agar ... hai to 2 hi operations chahiye sirf

            if (i > 0 && i < n - 1)
            {
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
                {
                    cout << 2 << endl;
                    f = false;
                    break;
                }
            }
        }

        if (f)
        {
            cout << e << endl;
        }
    }
    return 0;
}
