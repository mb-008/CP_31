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
        int c = 0;

        while (((s[0] == '0') && (s[s.size() - 1] == '1')) || ((s[0] == '1') && (s[s.size() - 1] == '0')))
        {
            s.erase(s.begin());

            s.erase(s.begin() + (s.size() - 1));

            c++;
        }

        cout << s.length() << "\n";
    }
    return 0;
}
